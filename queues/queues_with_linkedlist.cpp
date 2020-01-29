#include "queues_with_linkedlist.h"

template <class generic_type>
queues_with_linkedlist<generic_type>::queues_with_linkedlist() {
    first_queue = NULL;
    rear_queue = NULL;
    item_count = 0;
}

template <class generic_type>
queues_with_linkedlist<generic_type>::~queues_with_linkedlist() {
    for (int i = 0; i <= item_count; i++) {
        delete_item();
    }
}

template <class generic_type>
void queues_with_linkedlist<generic_type>::add_item(const generic_type& item) {
    node<generic_type> *new_node;
    new_node = new node<generic_type>;
    new_node -> pointer = NULL;
    new_node -> information = item;
    if (first_queue == NULL) {
        first_queue = new_node;
        rear_queue = new_node;
    } else {
        rear_queue -> pointer = new_node;
        rear_queue = rear_queue -> pointer;
    }
    item_count++;
}

template <class generic_type>
void queues_with_linkedlist<generic_type>::delete_item() {
    node<generic_type> *del_item;
    if (!is_empty_queue()) {
        del_item = first_queue;
        first_queue = first_queue -> pointer;
        delete del_item;
        if (first_queue == NULL) {
            rear_queue = NULL;
        }
        item_count--;
    } else {
        cout << "Queue is empty!" << endl;
    }
}

template <class generic_type>
void queues_with_linkedlist<generic_type>::initialize_queue() {
    node<generic_type> *temp;
    while (first_queue != NULL) {
        temp = first_queue;
        first_queue = first_queue -> pointer;
        delete temp;
    }
    rear_queue = NULL;
    item_count = 0;
}

template <class generic_type>
bool queues_with_linkedlist<generic_type>::is_empty_queue() const {
    return (first_queue == NULL);
}

template <class generic_type>
bool queues_with_linkedlist<generic_type>::is_full_queue() const {
    return false;
}

template <class generic_type>
generic_type queues_with_linkedlist<generic_type>::first_item() const {
    assert(first_queue != NULL);
    return first_queue -> pointer;
}

template <class generic_type>
generic_type queues_with_linkedlist<generic_type>::last_item() const {
    assert(rear_queue != NULL);
    return rear_queue -> pointer;
}
