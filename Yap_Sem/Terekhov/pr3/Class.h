#ifndef CLASS_H
#define CLASS_H

#include <iostream>

class DynamicArray {
private:
    int* data;
    int size;
public:
    DynamicArray(int size);
    ~DynamicArray();
    int* getData();
    int getSize();
    void CountArrayElementsBiggerD(int);

    void printAuthorInfo();
    void printArray();
};
class SimpleDA : public DynamicArray {
public:
    SimpleDA(int);
    void MultipleArrayElementsAfterAbsMax();
};
#endif
