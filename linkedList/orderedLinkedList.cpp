#include "orderedLinkedList.h"

orderedLinkedList::orderedLinkedList() {
    first_pointer = NULL;
    last_pointer = NULL;
    count_of_nodes = 0;
}

orderedLinkedList::orderedLinkedList(const orderedLinkedList& copied_list) {
    first_pointer = NULL;
    copy_list(copied_list);
}

orderedLinkedList::~orderedLinkedList() {
    destroy_list();
}

const orderedLinkedList& orderedLinkedList::operator= (const orderedLinkedList& linked_list) {
    if(this != &linked_list){
        copy_list(linked_list);
    }
    return *this;
}

void orderedLinkedList::initialize_list() {
    destroy_list();
}

void orderedLinkedList::insert_node(const int& item) {
    node *temp;
    temp -> information = item;
    if(first_pointer == NULL){
        temp -> pointer = NULL;
        first_pointer = temp;
        last_pointer = temp;
        count_of_nodes++;
    } else {
        if(first_pointer -> information > item){
            temp -> pointer = first_pointer;
            first_pointer = temp;
            count_of_nodes++;
        } else if(last_pointer -> information < item) {
            last_pointer -> pointer = temp;
            temp -> pointer = NULL;
            last_pointer = temp;
            count_of_nodes++;
        } else {
            node *previous;
            node *next;
            previous = first_pointer;
            next = first_pointer -> pointer;
            while (next -> pointer != NULL) {
                if(previous -> information < item && next -> information > item) {
                    previous -> pointer = temp;
                    temp ->pointer = next;
                    count_of_nodes++;
                } else {
                    previous = previous -> pointer;
                    next = next -> pointer;
                }
            }
        }
    }
}

void orderedLinkedList::delete_node(const int& item) {
    node *previous_node;
    node *next_node;
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

bool orderedLinkedList::search_node(const int& item) const {
    node *temp;
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

int orderedLinkedList::get_first_node_information() {
    assert(first_pointer != NULL);
    return first_pointer -> information;
}

int orderedLinkedList::get_last_node_information() {
    assert(last_pointer != NULL);
    return last_pointer -> information;
}

node orderedLinkedList::go_first_node() {
    node temp;
    temp.information = first_pointer -> information;
    temp.pointer = first_pointer -> pointer;
    return temp;
}

node orderedLinkedList::go_last_node() {
    node temp;
    temp.information = last_pointer -> information;
    temp.pointer = last_pointer -> pointer;
    return temp;
}

node* orderedLinkedList::go_next_node(node *node) {
    node = node -> pointer;
    return node;
}

bool orderedLinkedList::is_empty_list() {
    if(first_pointer == NULL && last_pointer == NULL && count_of_nodes == 0){
        return true;
    } else {
        return false;
    }
}

void orderedLinkedList::print_list() {
    node *temp;
    temp = first_pointer;
    while (temp != NULL){
        cout << temp ->information << endl;
        temp = temp -> pointer;
    }
}

int orderedLinkedList::list_length() {
    return count_of_nodes;
}

void orderedLinkedList::destroy_list() {
    node *temp;
    while (first_pointer != NULL){
        temp = first_pointer;
        first_pointer = first_pointer -> pointer;
        delete temp;
    }
    last_pointer = NULL;
    count_of_nodes = 0;
}

void orderedLinkedList::copy_list(const orderedLinkedList& copied_list) {
    node *temp;
    node *copied_temp;
    if(first_pointer != NULL){
        destroy_list();
    }
    if(copied_list.first_pointer == NULL){
        initialize_list();
    } else {
        copied_temp = copied_list.first_pointer;
        count_of_nodes = copied_list.count_of_nodes;
        first_pointer = new node;
        first_pointer -> information = copied_temp -> information;
        first_pointer -> pointer = NULL;
        last_pointer = first_pointer;
        copied_temp = copied_temp -> pointer;
        while (copied_temp != NULL){
            temp = new node;
            temp -> information = copied_temp -> information;
            temp -> pointer = NULL;
            last_pointer -> pointer = temp;
            last_pointer = temp;
            copied_temp = copied_temp -> pointer;
        }
    }
}
