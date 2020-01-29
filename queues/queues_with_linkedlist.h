#ifndef QUEUES_QUEUES_WITH_LINKEDLIST_H
#define QUEUES_QUEUES_WITH_LINKEDLIST_H

#include "queue_type.h"

template <class generic_type>
struct node {
    node<generic_type> *pointer;
    generic_type information;
};

template <class generic_type>
class queues_with_linkedlist {
public:
    queues_with_linkedlist();
    ~queues_with_linkedlist();
    void add_item(const generic_type& item) = 0;
    void delete_item() = 0;
    void initialize_queue() = 0;
    bool is_empty_queue() const = 0;
    bool is_full_queue() const = 0;
    generic_type first_item() const = 0;
    generic_type last_item() const = 0;

private:
    node<generic_type> first_queue;
    node<generic_type> rear_queue;
    int item_count = 0;
};


#endif //QUEUES_QUEUES_WITH_LINKEDLIST_H
