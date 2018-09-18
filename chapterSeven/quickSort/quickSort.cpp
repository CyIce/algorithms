//
// Created by CyIce on 2018/9/17.
//

#include "quickSort.h"

void quickSort(int *arr, int p, int r) {
    if (p < r - 1) {
        int q = partition(arr, p, r - 1);
        quickSort(arr, p, q);
        quickSort(arr, q + 1, r);
    }
}


int partition(int *arr, int p, int r) {

    int x = arr[r];
    int i = p - 1;
    for (int j = p; j <= r; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    return i;
}
