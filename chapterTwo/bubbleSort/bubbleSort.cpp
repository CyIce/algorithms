//
// Created by CyIce on 2018/9/7.
//

#include "bubbleSort.h"

void bubbleSort(int *arr, int length) {
    length--;
    for (int i = 0; i < length; i++) {
        for (int j = length; j >= i + 1; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(&arr[j], &arr[j - 1]);
            }
        }
    }
}