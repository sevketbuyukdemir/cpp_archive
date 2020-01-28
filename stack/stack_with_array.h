#ifndef STACK_STACK_WITH_ARRAY_H
#define STACK_STACK_WITH_ARRAY_H

#include "stack_type.h"

using namespace std;

template <class generic_type>
class stack_with_array: public stack_type<generic_type> {
public:
    stack_with_array(int stack_size = 20);
    stack_with_array(const stack_type<generic_type>& stack);
    ~stack_with_array();
    const stack_with_array<generic_type>& operator= (const stack_type<generic_type>& stack);
    void initialize_stack();
    bool is_empty_stack() const;
    bool is_full_stack() const;
    void push(const generic_type& item);
    void top() const;
    void pop();
private:
    int max_stack_size;
    int stack_top;
    generic_type *list;
    void copy_stack(const stack_with_array<generic_type> &stack);
};

#endif //STACK_STACK_WITH_ARRAY_H
