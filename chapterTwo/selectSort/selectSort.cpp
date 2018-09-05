//
// Created by CyIce on 2018/9/5.
//

#include "selectSort.h"

void selectSort(int *arr, int length) {

    for (int i = 0; i < length-1; i++) {
        int min = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < length; j++) {
            if (min > arr[j]) {
                min = arr[j];
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}