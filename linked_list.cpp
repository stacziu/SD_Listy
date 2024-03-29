//
// Created by stasi on 28.03.2024.
//

#include <iostream>
#include "linked_list.h"

linked_list::linked_list(){
    size = 0;
    head = nullptr;
}

Node* linked_list::getNode(int index) {
    Node* tmp = head;
    for(int i = 0; i < index; i++){
        tmp = tmp->next;
    }
    return tmp;
}

int linked_list::getSize() const {
    return size;
}


void linked_list::addFront(int element) {
    Node* new_node = new Node;
    new_node->value = element;
    new_node->next = head;
    head = new_node;
    size++;
}

bool linked_list::isEmpty() const {
    if(size == 0) return true;
    else return false;
}
void linked_list::addBack(int element) {
    if(size != 0) {
        Node *new_node = new Node;
        Node *previous = getNode(size - 1);
        new_node->value = element;
        new_node->next = nullptr;
        previous->next = new_node;
        size++;
    }
    else{
        addFront(element);
    }
}
void linked_list::addElement(int element, int index) {
    if (index > 0) {
        Node* new_node = new Node;
        Node* prev_node = getNode(index - 1);
        new_node->value = element;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
        size++;
    }
    else {
        addFront(element);
    }
}

void linked_list::removeFront() {
    Node* tmp = head;
    head = head->next;
    delete tmp;
    size--;
}
void linked_list::removeElement(int index) {
    Node* old_node = getNode(index - 1);
    Node* tmp = old_node->next;
    old_node->next = tmp->next;
    delete tmp;
    size--;
}

void linked_list::removeBack() {
    Node* old_node = getNode(size - 1);
    Node* tmp = old_node->next;
    old_node->next = nullptr;
    delete tmp;
    size--;
}

void linked_list::findValue(int value) {
    Node* tmp = head;
    for(int i = 0; i < size; i++){

    }
}

void linked_list::showList() {
    Node* tmp = head;
    for(int i = 0; i < size; i++){
        std::cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

