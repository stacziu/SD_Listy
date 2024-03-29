//
// Created by stasi on 18.03.2024.
//

#include "dynamic_array.h"
#include <iostream>

dynamic_array::dynamic_array() {
    size = 0;
    capacity = 4;
    arr = new int[capacity];
}

dynamic_array::~dynamic_array() {
    if (!isEmpty()) {
    delete[] arr;
    }
}

bool dynamic_array::isEmpty() const {
    if (size == 0){
        return true;
    }
    else return false;
}
void dynamic_array::increaseCap() {
    if(size == capacity){
        capacity *= 2;
        int* temp = new int[capacity];
        for(int i = 0; i < size; i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }
}

void dynamic_array::decreaseCap() {
    if(size == capacity / 2){
        int* temp = new int[capacity];
        for(int i = 0; i < size; i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity /= 2;
    }
}

void dynamic_array::show() {
    std::cout << "Tablica dynamiczna od size: " << std::endl;
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;

    std::cout << "Tablica dynamiczna od capacity: " << std::endl;
    for(int i = 0; i < capacity; i++){
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}
void dynamic_array::addElement(int element, int index) {
    if(index >= size){
        addBack(element);
    }
    else {
        increaseCap();
        size++;
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
    }
}

void dynamic_array::addBack(int element) {
    size++;
    increaseCap();
    arr[size - 1] = element;
}

void dynamic_array::addFront(int element) {
    increaseCap();
    size++;
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
}

void dynamic_array::removeElement(int index) {
    decreaseCap();
    for(int i = index; i < size; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}

void dynamic_array::removeBack(){
    decreaseCap();
    size--;

}

void dynamic_array::removeFront() {
    decreaseCap();
    for(int i = 0; i < size; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}

int dynamic_array::findElement(int element) {
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
}
