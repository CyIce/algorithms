//
// Created by CyIce on 2018/9/18.
//

#include "countingSort.h"

void countingSort(int *arr, int length) {
    int max = arr[0];
    int b[length + 1];
    for (int i = 1; i < length; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    int c[max + 1];
    for (int i = 0; i <= max; i++) {
        c[i]=0;
    }
    for (int i = 0; i < length; i++) {
        c[arr[i]] = c[arr[i]] + 1;
    }
    for (int i = 1; i <= max; i++) {
        c[i] = c[i] + c[i - 1];
    }

    for (int i = length - 1; i >= 0; i--) {
        b[c[arr[i]]] = arr[i];
        c[arr[i]]--;
    }

    for (int i = 0; i < length; i++) {
        arr[i] = b[i + 1];
    }

}