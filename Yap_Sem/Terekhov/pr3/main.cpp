#include "Class.h"
#include <stdio.h>

int main() {
    SimpleDA arr(10);
    int d;

    arr.printAuthorInfo();
    arr.printArray();

    printf("Input integer value: ");
    scanf_s("%d", &d);

    arr.CountArrayElementsBiggerD(d);
    arr.MultipleArrayElementsAfterAbsMax();

    return 0;
}