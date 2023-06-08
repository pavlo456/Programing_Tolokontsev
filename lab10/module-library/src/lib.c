#include "lib.h"

void calculate_fibonacci(int arr[], int nnn)
{
    int aaa = 10;
    int bbb = aaa;
    int ccc;
    int xxx = 0;

    while (aaa < nnn) {
        arr[xxx] = aaa;
        xxx += 1;
        ccc = aaa + bbb;
        aaa = bbb;
        bbb = ccc;
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

