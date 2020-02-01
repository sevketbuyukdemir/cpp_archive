#ifndef LINKEDLIST_UNORDEREDLINKEDLIST_H
#define LINKEDLIST_UNORDEREDLINKEDLIST_H

#include <iostream>
#include <string>
#include <sstream>
#include <assert.h>
using namespace std;

template <class generic_type>
struct node {
    node<generic_type> *pointer;
    generic_type information;
};

template <class generic_type>
class unorderedLinkedList {
public:
    unorderedLinkedList();
    unorderedLinkedList(const unorderedLinkedList<generic_type>& copied_list);
    ~unorderedLinkedList();
    const unorderedLinkedList<generic_type>& operator= (const unorderedLinkedList<generic_type>& linked_list);
    void initialize_list();
    virtual void insert_to_start(const generic_type& item) = 0;
    virtual void insert_to_end(const generic_type& item) = 0;
    virtual void delete_node(const generic_type& item) = 0;
    virtual bool search_item(const generic_type& item) const = 0;
    generic_type get_first_node_information();
    generic_type get_last_node_information();
    generic_type go_first_node();
    generic_type go_last_node();
    generic_type go_next_node(node<generic_type> node);
    bool is_empty_list();
    void print_list();
    int list_length();
    void destroy_list();
    void insertion_sort();

protected:
    int count_of_nodes;
    node<generic_type> *first_pointer;
    node<generic_type> *last_pointer;

private:
    void copy_list(const unorderedLinkedList<generic_type>& copied_list);

};


#endif //LINKEDLIST_UNORDEREDLINKEDLIST_H
