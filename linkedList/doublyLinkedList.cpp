#include "doublyLinkedList.h"
/**
 * different only from orderedLinkedList:
 * 1- insert node
 * 2- delete node
 * 3- copy list
 * Because we use 2 pointer(previous and next) for 1 node.
 */
doublyLinkedList::doublyLinkedList() {
    first_pointer = NULL;
    last_pointer = NULL;
    count_of_nodes = 0;
}

doublyLinkedList::~doublyLinkedList() {
    destroy_list();
}

void doublyLinkedList::initialize_list() {
    destroy_list();
}

void doublyLinkedList::insert_node(const int& item) {
    node *current;
    node *previous_current;
    bool found;
    node *temp;
    temp -> information = item;
    temp -> next_pointer = NULL;
    temp -> previous_pointer = NULL;
    if(first_pointer == NULL){
        first_pointer = temp;
        last_pointer = temp;
        count_of_nodes++;
    } else {
        found = false;
        current = first_pointer;
        while (current != NULL && !found) {
            if (current->information >= item) {
                found = true;
            }
            else {
                previous_current = current;
                current = current->next_pointer;
            }

            if(current == first_pointer) {
                first_pointer -> previous_pointer = temp;
                temp ->next_pointer = first_pointer;
                first_pointer = temp;
                count_of_nodes++;
            } else {
                if(current != NULL) {
                    previous_current -> next_pointer = temp;
                    temp -> previous_pointer = previous_current;
                    temp -> next_pointer = current;
                    current -> previous_pointer = temp;
                } else {
                    previous_current -> next_pointer = temp;
                    temp -> previous_pointer = previous_current;
                    last_pointer = temp;
                }
                count_of_nodes++;
            }
        }
    }
}

void doublyLinkedList::delete_node(const int& item) {
    node *temp;
    node *trail_temp;
    bool found;
    if(is_empty_list()){
        cout << "Linked list is empty!!!" << endl;
    } else if (first_pointer -> information == item) {
        temp = first_pointer;
        first_pointer = first_pointer -> next_pointer;
        if(first_pointer != NULL){
            first_pointer -> previous_pointer = NULL;
        } else {
            last_pointer = NULL;
        }
        count_of_nodes--;
        delete temp;
    } else {
        found = false;
        temp = first_pointer;
        while (temp != NULL && !found) {
            if (temp -> information >= item) {
                found = true;
            } else {
                temp = temp -> next_pointer;
            }

            if (temp == NULL) {
                cout << "Item can not found!!!" << endl;
            } else if (temp -> information == item) {
                trail_temp = temp -> previous_pointer;
                trail_temp -> next_pointer = temp -> next_pointer;
                if(temp -> next_pointer != NULL) {
                    temp -> next_pointer -> previous_pointer = trail_temp;
                }
                if(temp == last_pointer) {
                    last_pointer = trail_temp;
                }
                count_of_nodes--;
                delete temp;
            } else {
                cout << "Item can not found!!!" << endl;
            }
        }
    }
}

bool doublyLinkedList::search_node(const int& item) const {
    node *temp;
    bool found = false;
    temp = first_pointer;
    while (temp != NULL && !found){
        if(temp -> information == item){
            found = true;
        } else {
            temp = temp -> next_pointer;
        }
    }
    return found;
}

int doublyLinkedList::get_first_node_information() {
    assert(first_pointer != NULL);
    return first_pointer -> information;
}

int doublyLinkedList::get_last_node_information() {
    assert(last_pointer != NULL);
    return last_pointer -> information;
}

node doublyLinkedList::go_first_node() {
    node temp;
    temp.information = first_pointer -> information;
    temp.next_pointer = first_pointer -> next_pointer;
    return temp;
}

node doublyLinkedList::go_last_node() {
    node temp;
    temp.information = last_pointer -> information;
    temp.next_pointer = last_pointer -> next_pointer;
    return temp;
}

node* doublyLinkedList::go_next_node(node *node) {
    node = node -> next_pointer;
    return node;
}

bool doublyLinkedList::is_empty_list() {
    if(first_pointer == NULL && last_pointer == NULL && count_of_nodes == 0){
        return true;
    } else {
        return false;
    }
}

void doublyLinkedList::print_list() {
    node *temp;
    temp = first_pointer;
    while (temp != NULL){
        cout << temp ->information << endl;
        temp = temp -> next_pointer;
    }
}

int doublyLinkedList::list_length() {
    return count_of_nodes;
}

void doublyLinkedList::destroy_list() {
    node *temp;
    while (first_pointer != NULL){
        temp = first_pointer;
        first_pointer = first_pointer -> next_pointer;
        delete temp;
    }
    last_pointer = NULL;
    count_of_nodes = 0;
}
