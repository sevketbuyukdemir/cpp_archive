#include "stack_with_linkedlist.h"

template <class generic_type>
stack_with_linkedlist<generic_type>::stack_with_linkedlist(const stack_with_linkedlist<generic_type>& stack) {
    stack_top = NULL;
    copyStack(stack);
}

template <class generic_type>
stack_with_linkedlist<generic_type>::~stack_with_linkedlist() {
    initialize_stack();
}

template <class generic_type>
const stack_with_linkedlist<generic_type>& stack_with_linkedlist<generic_type>::operator= (const stack_with_linkedlist<generic_type>& stack) {
    if (this != &stack){
        copy_stack(stack);
    }
    return *this;
}

template <class generic_type>
void stack_with_linkedlist<generic_type>::initialize_stack() {
    node<generic_type> *temp; //pointer to delete the node
    while (stack_top != NULL)
    {
        temp = stack_top;
        stack_top = stack_top -> pointer;
        delete temp;
    }
}

template <class generic_type>
bool stack_with_linkedlist<generic_type>::is_empty_stack() const {
    return(stack_top == NULL);
}

template <class generic_type>
bool stack_with_linkedlist<generic_type>::is_full_stack() const {
    return false; // Linked list can not be full
}

template <class generic_type>
void stack_with_linkedlist<generic_type>::push(const generic_type& item) {
    node<generic_type> *temp;
    temp = new node<generic_type>;
    temp -> information = item;
    temp -> pointer = stack_top;
    stack_top = temp;
}

template <class generic_type>
generic_type stack_with_linkedlist<generic_type>::top() const {
    assert(stack_top != NULL);
    return stack_top -> information;
}

template <class generic_type>
void stack_with_linkedlist<generic_type>::pop() {
    node<generic_type> *temp;
    if (stack_top != NULL)
    {
        temp = stack_top;
        stack_top = stack_top -> pointer;
        delete temp;
    }
    else {
        cout << "Stack is empty!" << endl;
    }
}

template <class generic_type>
void stack_with_linkedlist<generic_type>::copy_stack(const stack_type<generic_type> &stack) {
    node<generic_type> *temp, *current, *last;
    if (stack_top != NULL)
        initialize_stack();
    if (stack.stack_top == NULL)
        stack_top = NULL;
    else
    {
        current = stack.stack_top;
        stack_top = new node<generic_type>;
        stack_top -> information = current -> information;
        stack_top -> pointer = NULL;
        last = stack_top;
        current = current -> pointer;
        while (current != NULL)
        {
            temp = new node<generic_type>;
            temp -> information = current -> information;
            temp -> pointer = NULL;
            last -> pointer = temp;
            last = temp;
            current = current -> pointer;
        }
    }
}
