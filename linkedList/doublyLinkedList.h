#ifndef LINKEDLIST_DOUBLYLINKEDLIST_H
#define LINKEDLIST_DOUBLYLINKEDLIST_H

#include <iostream>
#include <string>
#include <sstream>
#include <assert.h>

using namespace std;

struct node {
    node *next_pointer;
    node *previous_pointer; // difference from orderedLinkedList
    int information;
};

class doublyLinkedList {
public:
    doublyLinkedList();
    ~doublyLinkedList();
    void initialize_list();
    virtual void insert_node(const int& item) = 0;
    virtual void delete_node(const int& item) = 0;
    virtual bool search_node(const int& item) const = 0;
    int get_first_node_information();
    int get_last_node_information();
    node go_first_node();
    node go_last_node();
    node* go_next_node(node *node);
    bool is_empty_list();
    void print_list();
    int list_length();
    void destroy_list();

protected:
    int count_of_nodes;
    node *first_pointer;
    node *last_pointer;

};


#endif //LINKEDLIST_DOUBLYLINKEDLIST_H
