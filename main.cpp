#include <iostream>
#include <cstdlib>
#include "dynamic_array.h"
#include "linked_list.h"

int main() {
    /*dynamic_array arr;
    arr.addElement(10,0);
    arr.addElement(20,1);
    arr.addElement(30,2);
    arr.addBack(1);
    arr.addBack(2);
    arr.addFront(15);
    arr.removeBack();
    arr.removeElement(2);
    arr.removeFront();
    arr.show();
    arr.findElement(20);*/

    linked_list list;
    //std::cout << list.getSize() << std::endl;
    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.addBack(4);
    list.addBack(5);
    //list.addElement(11,1);

    /*list.removeBack();
    list.removeFront();
    list.removeElement(1);*/
    list.showList();




    return 0;
}
