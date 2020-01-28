#ifndef STACK_STACK_TYPE_H
#define STACK_STACK_TYPE_H

#include <iostream>
#include <assert.h>
using namespace std;

template <class generic_type>
class stack_type {
public:
    virtual void initialize_stack() = 0;
    virtual bool is_empty_stack() const = 0;
    virtual bool is_full_stack() const = 0;
    virtual void push(const generic_type& item) = 0;
    virtual void top() const = 0;
    virtual void pop() const = 0;
};

#endif //STACK_STACK_TYPE_H
