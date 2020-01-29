#include "queues_with_array.h"

template <class generic_type>
queues_with_array<generic_type>::queues_with_array(int queue_size){
    if (queue_size <= 0) {
        max_queue_size = 10;
    } else {
        max_queue_size = queue_size;
    }
    first_queue = 0;
    rear_queue = max_queue_size - 1;
    item_count = 0;
    list = new generic_type[max_queue_size]; // array object creating
}

template <class generic_type>
queues_with_array<generic_type>::~queues_with_array(){
    delete [] list;
}

template <class generic_type>
void queues_with_array<generic_type>::add_item(const generic_type& item) {
    if (!is_full_queue()) {
        rear_queue = (rear_queue + 1) % max_queue_size;
        item_count++;
        list[rear_queue] = item;
    } else {
        cout << "Queue is full!" << endl;
    }
}

template <class generic_type>
void queues_with_array<generic_type>::delete_item() {
    if (!is_empty_queue()) {
        item_count--;
        first_queue = (first_queue + 1) % max_queue_size;
    } else {
        cout << "Queue is empty!" << endl;
    }
}

template <class generic_type>
void queues_with_array<generic_type>::initialize_queue() {
    first_queue = 0;
    rear_queue = max_queue_size - 1;
    item_count = 0;
}

template <class generic_type>
bool queues_with_array<generic_type>::is_empty_queue() const {
    return (item_count == 0);
}

template <class generic_type>
bool queues_with_array<generic_type>::is_full_queue() const {
    return (item_count == max_queue_size);
}

template <class generic_type>
generic_type queues_with_array<generic_type>::first_item() const {
    assert(!is_empty_queue());
    return list[first_queue];
}

template <class generic_type>
generic_type queues_with_array<generic_type>::last_item() const {
    assert(!is_empty_queue());
    return list[rear_queue];
}
