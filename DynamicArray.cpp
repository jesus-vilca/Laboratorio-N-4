#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    size = 0;
    arr = new int[0];
}

DynamicArray::DynamicArray(const int*ptr, int size) {
    this->size = size;
    this->arr = new int[size];

    for(int i = 0; i < size; i++)
        arr[i] = ptr[i];
}

DynamicArray::DynamicArray(const DynamicArray &o) {
    this->size = o.size;
    this->arr = new int[o.size];

    for(int i = 0; i < size; i++)
        arr[i] = o.arr[i];
}

void DynamicArray::push_back(int elem) {
    int *tmp = new int[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = arr[i];
    tmp[size] = elem;

    size += 1;
    delete []arr;

    arr = tmp;
}

void DynamicArray::insert(int elem,int pos) {
    int *tmp = new int[size+1];
    for(int i = size; i > pos; i--)
        tmp[i] = arr[i -1];
    tmp[pos] = elem;

    size += 1;
    delete []arr;

    arr = tmp;
}

void DynamicArray::remove(int pos) {
    int *tmp = new int[size-1];
    for(int i = pos; i < size; i++)
        tmp[i] = arr[i +1];

    size -= 1;
    delete []arr;

    arr = tmp;
}

void DynamicArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

DynamicArray::~DynamicArray() {
    delete []arr;
}
