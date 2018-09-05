//
// Created by CyIce on 2018/9/5.
//

#include "insertionSort.h"

void insertionSort(int *arr, int length, bool order) {
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    //降序排列
    if (!order) {
        for (int i = 0; i < length / 2; i++) {
            swap(&arr[i], &arr[length - i - 1]);
        }
    }
}
