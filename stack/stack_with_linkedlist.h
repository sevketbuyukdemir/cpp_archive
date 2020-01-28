#ifndef STACK_STACK_WITH_LINKEDLIST_H
#define STACK_STACK_WITH_LINKEDLIST_H

#include "stack_type.h"

template <class generic_type>
struct node {
    generic_type information;
    node<generic_type> *pointer;
};

template <class generic_type>
class stack_with_linkedlist: public stack_type<generic_type> {
public:
    stack_with_linkedlist(const stack_with_linkedlist<generic_type>& stack);
    ~stack_with_linkedlist();
    const stack_with_linkedlist<generic_type>& operator= (const stack_with_linkedlist<generic_type>& stack);
    void initialize_stack();
    bool is_empty_stack() const;
    bool is_full_stack() const;
    void push(const generic_type& item);
    generic_type top() const;
    void pop();

private:
    node<generic_type> *stack_top;
    void copy_stack(const stack_type<generic_type>& stack);

};


#endif //STACK_STACK_WITH_LINKEDLIST_H
