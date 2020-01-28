#include "unorderedLinkedList.h"

template <class generic_type>
unorderedLinkedList<generic_type>::unorderedLinkedList(){
    first_pointer = NULL;
    last_pointer = NULL;
    count_of_nodes = 0;
}

template <class generic_type>
unorderedLinkedList<generic_type>::unorderedLinkedList(const unorderedLinkedList<generic_type>& copied_list){
    first_pointer = NULL;
    copy_list(copied_list);
}

template <class generic_type>
unorderedLinkedList<generic_type>::~unorderedLinkedList(){
    destroy_list();
}

template <class generic_type>
const unorderedLinkedList<generic_type>& unorderedLinkedList<generic_type>::operator= (const unorderedLinkedList<generic_type>& linked_list){
    if(this != &linked_list){
        copy_list(linked_list);
    }
    return *this;
}

template <class generic_type>
void unorderedLinkedList<generic_type>::initialize_list(){
    destroy_list();
}

template <class generic_type>
void unorderedLinkedList<generic_type>::insert_to_start(const generic_type& item) {
    node<generic_type> *temp;
    temp = new node<generic_type>;
    temp -> information = item;
    temp -> pointer = first_pointer;
    first_pointer = temp;
    count_of_nodes++;
}

template <class generic_type>
void unorderedLinkedList<generic_type>::insert_to_end(const generic_type& item) {
    node<generic_type> *temp;
    temp = new node<generic_type>;
    temp -> information = item;
    temp -> pointer = NULL;
    if(first_pointer == NULL){
        first_pointer = temp;
        last_pointer = temp;
        count_of_nodes++;
    } else {
        last_pointer -> pointer = temp;
        last_pointer = temp;
        count_of_nodes++;
    }
}

template <class generic_type>
void unorderedLinkedList<generic_type>::delete_node(const generic_type& item) {
    node<generic_type> previous_node;
    node<generic_type> next_node;
    bool found;
    if(is_empty_list()){
        cout << "Linked list is empty!!!" << endl;
    } else {
        if(first_pointer -> information == item){
            next_node = first_pointer;
            first_pointer = first_pointer -> pointer;
            count_of_nodes--;
            if(first_pointer == NULL){
                last_pointer = NULL;
            }
            delete next_node;
        } else {
            found = false;
            previous_node = first_pointer;
            next_node = first_pointer -> pointer;
            while (next_node != NULL && !found){
                if(next_node -> information  != item){
                    previous_node = next_node;
                    next_node = next_node -> pointer;
                } else {
                    found = true;
                }
            }
            if (found) {
                previous_node -> pointer = next_node -> pointer;
                count_of_nodes--;
                if(last_pointer == next_node){
                    last_pointer = previous_node;
                    delete next_node;
                } else {
                    cout << "Item can not found!!!" << endl;
                }
            }
        }
    }
}

template <class generic_type>
bool unorderedLinkedList<generic_type>::search_item(const generic_type& item) const {
    node<generic_type> *temp;
    bool found = false;
    temp = first_pointer;
    while (temp != NULL && !found){
        if(temp -> information == item){
            found = true;
        } else {
            temp = temp -> pointer;
        }
    }
    return found;
}

template <class generic_type>
unorderedLinkedList<generic_type> unorderedLinkedList<generic_type>::get_first_node_information() {
    assert(first_pointer != NULL);
    return first_pointer -> information;
}

template <class generic_type>
unorderedLinkedList<generic_type> unorderedLinkedList<generic_type>::get_last_node_information() {
    assert(last_pointer != NULL);
    return last_pointer -> information;
}

template <class generic_type>
generic_type unorderedLinkedList<generic_type>::go_first_node() {
    unorderedLinkedList<generic_type> temp(first_pointer);
    return temp;
}

template <class generic_type>
generic_type unorderedLinkedList<generic_type>::go_last_node() {
    unorderedLinkedList<generic_type> temp(last_pointer);
    return temp;
}

template <class generic_type>
generic_type unorderedLinkedList<generic_type>::go_next_node(node<generic_type> node) {
    node = node -> pointer;
    unorderedLinkedList<generic_type> temp(node);
    return temp;
}

template <class generic_type>
bool unorderedLinkedList<generic_type>::is_empty_list() {
    if(first_pointer == NULL && last_pointer == NULL && count_of_nodes == 0){
        return true;
    } else {
        return false;
    }
}

template <class generic_type>
void unorderedLinkedList<generic_type>::print_list() {
    node<generic_type> *temp;
    temp = first_pointer;
    while (temp != NULL){
        cout << temp ->information << endl;
        temp = temp -> pointer;
    }
}

template <class generic_type>
int unorderedLinkedList<generic_type>::list_length() {
    return count_of_nodes;
}

template <class generic_type>
void unorderedLinkedList<generic_type>::destroy_list() {
    node<generic_type> *temp;
    while (first_pointer != NULL){
        temp = first_pointer;
        first_pointer = first_pointer -> pointer;
        delete temp;
    }
    last_pointer = NULL;
    count_of_nodes = 0;
}

template <class generic_type>
void unorderedLinkedList<generic_type>::copy_list(const unorderedLinkedList<generic_type>& copied_list) {
    node<generic_type> *temp;
    node<generic_type> *copied_temp;
    if(first_pointer != NULL){
        destroy_list();
    }
    if(copied_list.first_pointer == NULL){
        initialize_list();
    } else {
        copied_temp = copied_list.first_pointer;
        count_of_nodes = copied_list.count_of_nodes;
        first_pointer = new node<generic_type>;
        first_pointer -> information = copied_temp -> information;
        first_pointer -> pointer = NULL;
        last_pointer = first_pointer;
        copied_temp = copied_temp -> pointer;
        while (copied_temp != NULL){
            temp = new node<generic_type>;
            temp -> information = copied_temp -> information;
            temp -> pointer = NULL;
            last_pointer -> pointer = temp;
            last_pointer = temp;
            copied_temp = copied_temp -> pointer;
        }
    }
}