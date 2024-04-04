#include <iostream>
#include <cstdlib>
#include "dynamic_array.h"
#include "linked_list.h"
#include <fstream>
#include <chrono>
#include <random>


int dynamic_array_test_addFront(std::string file, int size){
    std::ofstream outputFile(file);
    int numberOfArrays = 100;
    if(!outputFile.is_open()){
        std::cerr << "Nie można otworzyć pliku do zapisu.";
        return 1;
    }
    else{
        for(int l = 0; l < 10; l++) {
            dynamic_array container[numberOfArrays];
            for (int i = 0; i < numberOfArrays; i++) {
                for (int j = 0; j < size; j++) {
                    container[i].addBack(1);
                }
            }
            auto begin = std::chrono::high_resolution_clock::now();
            for (int i = 0; i < numberOfArrays; i++) {
                container[i].addFront(1);
            }
            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            outputFile << elapsed.count() << std::endl;

        }
        return 0;
    }
}

int dynamic_array_test_addBack(std::string file, int size){
    std::ofstream outputFile(file);

    int numberOfArrays = 100;

    if(!outputFile.is_open()){
        std::cerr << "Nie można otworzyć pliku do zapisu.";
        return 1;
    }
    else{
        for(int l = 0; l < 10; l++) {
            dynamic_array container[numberOfArrays];
            for (int i = 0; i < numberOfArrays; i++) {
                for (int j = 0; j < size; j++) {
                    container[i].addBack(1);
                }
            }
            auto begin = std::chrono::high_resolution_clock::now();
            for (int i = 0; i < numberOfArrays; i++) {
                container[i].addBack(1);
            }
            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            outputFile << elapsed.count() << std::endl;
        }
    return 0;
    }
}
int dynamic_array_test_removeBack(std::string file, int size){
    std::ofstream outputFile(file);

    int numberOfArrays = 100;

    if(!outputFile.is_open()){
        std::cerr << "Nie można otworzyć pliku do zapisu.";
        return 1;
    }
    else{
        for(int l = 0; l < 10; l++) {
            dynamic_array container[numberOfArrays];
            for (int i = 0; i < numberOfArrays; i++) {
                for (int j = 0; j < size; j++) {
                    container[i].addBack(1);
                }
            }
            auto begin = std::chrono::high_resolution_clock::now();
            for (int i = 0; i < numberOfArrays; i++) {
                container[i].removeBack();
            }
            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            outputFile << elapsed.count() << std::endl;
        }
        return 0;
    }
}

int dynamic_array_test_removeFront(std::string file, int size){
    std::ofstream outputFile(file);

    int numberOfArrays = 100;

    if(!outputFile.is_open()){
        std::cerr << "Nie można otworzyć pliku do zapisu.";
        return 1;
    }
    else{
        for(int l = 0; l < 10; l++) {
            dynamic_array container[numberOfArrays];
            for (int i = 0; i < numberOfArrays; i++) {
                for (int j = 0; j < size; j++) {
                    container[i].addBack(1);
                }
            }
            auto begin = std::chrono::high_resolution_clock::now();
            for (int i = 0; i < numberOfArrays; i++) {
                container[i].removeFront();
            }
            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            outputFile << elapsed.count() << std::endl;
        }
        return 0;
    }
}

int dynamic_array_test_search(std::string file, int size){
    std::ofstream outputFile(file);
    int numberOfArrays = 100;

    if(!outputFile.is_open()){
        std::cerr << "Nie można otworzyć pliku do zapisu.";
        return 1;
    }
    else{
        for(int l = 0; l < 10; l++) {
            dynamic_array container[numberOfArrays];
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<int> dist(1,size - 1);
            int randomNumber = dist(gen);
            outputFile << randomNumber << ", ";

            for (int i = 0; i < numberOfArrays; i++) {
                for (int j = 0; j < size; j++) {
                    container[i].addBack(1);
                }
                container[i].addElement(2, randomNumber);
            }

            auto begin = std::chrono::high_resolution_clock::now();
            for (int i = 0; i < numberOfArrays; i++) {
                container[i].findElement(2);
            }
            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            outputFile << elapsed.count() << std::endl;
        }
        return 0;
    }
}
int main() {
    dynamic_array_test_addFront("plikFront10.txt", 10);
    dynamic_array_test_addFront("plikFront100.txt", 100);
    dynamic_array_test_addFront("plikFront1000.txt", 1002);
    dynamic_array_test_addFront("plikFront2000.txt", 2002);
    dynamic_array_test_addFront("plikFront4000.txt", 4002);
    dynamic_array_test_addFront("plikFront8000.txt", 8001);
    dynamic_array_test_addFront("plikFront16000.txt", 16002);
    dynamic_array_test_addFront("plikFront32000.txt", 32002);
    dynamic_array_test_addFront("plikFront64000.txt", 64002);
    dynamic_array_test_addFront("plikFront128000.txt", 128002);

    /*dynamic_array_test_addBack("plikBack10.txt", 10);
    dynamic_array_test_addBack("plikBack100.txt", 100);
    dynamic_array_test_addBack("plikBack1000.txt", 1002);
    dynamic_array_test_addBack("plikBack2000.txt", 2002);
    dynamic_array_test_addBack("plikBack4000.txt", 4002);
    dynamic_array_test_addBack("plikBack8000.txt", 8001);
    dynamic_array_test_addBack("plikBack16000.txt", 16002);
    dynamic_array_test_addBack("plikBack32000.txt", 32002);
    dynamic_array_test_addBack("plikBack64000.txt", 64002);
    dynamic_array_test_addBack("plikBack128000.txt", 128002);*/

    /*dynamic_array_test_removeFront("removeFront10.txt", 10);
    dynamic_array_test_removeFront("removeFront100.txt", 100);
    dynamic_array_test_removeFront("removeFront1000.txt", 1002);
    dynamic_array_test_removeFront("removeFront2000.txt", 2002);
    dynamic_array_test_removeFront("removeFront4000.txt", 4002);
    dynamic_array_test_removeFront("removeFront8000.txt", 8001);
    dynamic_array_test_removeFront("removeFront16000.txt", 16002);
    dynamic_array_test_removeFront("removeFront32000.txt", 32002);
    dynamic_array_test_removeFront("removeFront64000.txt", 64002);
    dynamic_array_test_removeFront("removeFront128000.txt", 128002);*/

    /*dynamic_array_test_removeBack("removeBack10.txt", 10);
    dynamic_array_test_removeBack("removeBack100.txt", 100);
    dynamic_array_test_removeBack("removeBack1000.txt", 1002);
    dynamic_array_test_removeBack("removeBack2000.txt", 2002);
    dynamic_array_test_removeBack("removeBack4000.txt", 4002);
    dynamic_array_test_removeBack("removeBack8000.txt", 8001);
    dynamic_array_test_removeBack("removeBack16000.txt", 16002);
    dynamic_array_test_removeBack("removeBack32000.txt", 32002);
    dynamic_array_test_removeBack("removeBack64000.txt", 64002);
    dynamic_array_test_removeBack("removeBack128000.txt", 128002);*/

    /*dynamic_array_test_search("plikSearch10.txt", 10);
    dynamic_array_test_search("plikSearch100.txt", 100);
    dynamic_array_test_search("plikSearch1000.txt", 1002);
    dynamic_array_test_search("plikSearch2000.txt", 2002);
    dynamic_array_test_search("plikSearch4000.txt", 4002);
    dynamic_array_test_search("plikSearch8000.txt", 8001);
    dynamic_array_test_search("plikSearch16000.txt", 16002);
    dynamic_array_test_search("plikSearch32000.txt", 32002);
    dynamic_array_test_search("plikSearch64000.txt", 64002);
    dynamic_array_test_search("plikSearch128000.txt", 128002);*/


}
