#include "Class.h"
#include <cstdlib>


using namespace std;

DynamicArray::DynamicArray(int size) : size(size) {
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = rand() % 201 - 100;
    }
}

DynamicArray::~DynamicArray() { delete[] data; }

int* DynamicArray::getData() { return data; }

int DynamicArray::getSize() { return size; }

void DynamicArray::CountArrayElementsBiggerD(int D) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] > D) counter++;
    }
    printf("Count array elements bigger d: %d\n", counter);
}

void DynamicArray::printAuthorInfo() { printf("Author: Terekhov I., group: BBBO-04-23, variant: 17\n"); }

void DynamicArray::printArray() {
    printf("Array content:");
    for (int i = 0; i < size; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

SimpleDA::SimpleDA(int size) : DynamicArray(size){ }

void SimpleDA::MultipleArrayElementsAfterAbsMax() {
    long multiple = 1;
    int absMax = 0;
    int size = getSize();
    int* data = getData();
    int absMaxIndex;
    for (int i = 0; i < size; i++) {
        if (abs(data[i]) > absMax) {
            absMax = abs(data[i]);
            absMaxIndex = i;
        }
    }
    if (absMaxIndex + 1 == size) printf("Multiple array elements after abs max: 0\n");
    for (int i = absMaxIndex + 1; i < size; i++) {
        multiple *= data[i];
    }
    printf("Multiple array elements after abs max: %ld\n", multiple);
}