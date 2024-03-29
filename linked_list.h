//
// Created by stasi on 28.03.2024.
//

#ifndef UNTITLED_LINKED_LIST_H
#define UNTITLED_LINKED_LIST_H

struct Node{
    int value;
    Node* next;
};

class linked_list{
    int size;
    Node* head;
public:
    linked_list();
    ~linked_list(){};
    Node* getNode(int index);
    int getSize() const;
    void addFront(int element);
    void addBack(int element);
    void addElement(int element, int index);
    void removeElement(int index);
    void removeFront();
    void removeBack();
    void showList();
    void findValue(int element);
    bool isEmpty() const;

};


#endif //UNTITLED_LINKED_LIST_H
