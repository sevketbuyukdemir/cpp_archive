#ifndef QUEUES_QUEUES_WITH_ARRAY_H
#define QUEUES_QUEUES_WITH_ARRAY_H

#include "queue_type.h"

template <class generic_type>
class queues_with_array: queue_type<generic_type> {
public:
    queues_with_array(int queue_size = 10);
    ~queues_with_array();
    void add_item(const generic_type& item) = 0;
    void delete_item() = 0;
    void initialize_queue() = 0;
    bool is_empty_queue() const = 0;
    bool is_full_queue() const = 0;
    generic_type first_item() const = 0;
    generic_type last_item() const = 0;

private:
    int max_queue_size;
    int item_count;
    int first_queue;
    int rear_queue;
    generic_type *list; // definition pointer array object
};


#endif //QUEUES_QUEUES_WITH_ARRAY_H
