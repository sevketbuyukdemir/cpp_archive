#include "stack_with_array.h"

template <class generic_type>
stack_with_array<generic_type>::stack_with_array(int stack_size) {
    if (stack_size <= 0) {
        max_stack_size = 20;
    } else {
        max_stack_size = stack_size;
    }

    stack_top = 0;
    list = new generic_type[max_stack_size];
}

template <class generic_type>
stack_with_array<generic_type>::stack_with_array(const stack_type<generic_type>& stack) {
    list = NULL;
    copy_stack(stack);
}

template <class generic_type>
stack_with_array<generic_type>::~stack_with_array() {
    delete [] list;
}

template <class generic_type>
const stack_with_array<generic_type>& stack_with_array<generic_type>::operator= (const stack_type<generic_type>& stack) {
    if (this != &stack) {
        copy_stack(stack);
    }
    return *this;
}

template <class generic_type>
void stack_with_array<generic_type>::initialize_stack() {
    stack_top = 0;
}

template <class generic_type>
bool stack_with_array<generic_type>::is_empty_stack() const {
    return(stack_top == 0);
}

template <class generic_type>
bool stack_with_array<generic_type>::is_full_stack() const {
    return (stack_top == max_stack_size);
}

template <class generic_type>
void stack_with_array<generic_type>::push(const generic_type& item) {
    if (!is_full_stack()) {
        list[stack_top] = item;
        stack_top++;
    } else {
        cout << "Stack is full!" << endl;
    }
}

template <class generic_type>
void stack_with_array<generic_type>::top() const {
    assert(stack_top != 0);
    return list[stack_top - 1];
}

template <class generic_type>
void stack_with_array<generic_type>::pop() {
    if(!is_empty_stack()) {
        stack_top--;
    } else {
        cout << "Stack is empty!" << endl;
    }
}

template <class generic_type>
void stack_with_array<generic_type>::copy_stack(const stack_with_array<generic_type>& stack) {
    delete [] list;
    max_stack_size = stack.max_stack_size;
    stack_top = stack.stack_top;
    list = new generic_type[max_stack_size];
    for (int i = 0; i < stack_top; i++) {
        list[i] = stack.list[i];
    }
}
