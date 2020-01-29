#ifndef QUEUES_QUEUE_TYPE_H
#define QUEUES_QUEUE_TYPE_H

#include <iostream>
#include "assert.h"
#include "string.h"
using namespace std;

template <class generic_type>
class queue_type {
public:
    virtual void add_item(const generic_type& item) = 0;
    virtual void delete_item() = 0;
    virtual void initialize_queue() = 0;
    virtual bool is_empty_queue() const = 0;
    virtual bool is_full_queue() const = 0;
    virtual generic_type first_item() const = 0;
    virtual generic_type last_item() const = 0;

};

#endif //QUEUES_QUEUE_TYPE_H
