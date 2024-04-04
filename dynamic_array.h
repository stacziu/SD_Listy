//
// Created by stasi on 18.03.2024.
//

#ifndef UNTITLED_DYNAMIC_ARRAY_H
#define UNTITLED_DYNAMIC_ARRAY_H


class dynamic_array {
    int size;
    int capacity;
    int *arr;

    public:
    dynamic_array();
    ~dynamic_array();
    bool isEmpty() const;
    int getSize();
    void show();
    void addElement(int element, int index);
    void increaseCap();
    void addBack(int element);
    void addFront(int element);
    void decreaseCap();
    int findElement(int element);
    void removeElement(int index);
    void removeFront();
    void removeBack();

    int getSize() const;
};


#endif //UNTITLED_DYNAMIC_ARRAY_H
