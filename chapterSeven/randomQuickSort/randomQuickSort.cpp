//
// Created by CyIce on 2018/9/18.
//

#include "randomQuickSort.h"

void randomQuickSort(int *arr, int p, int r) {
    if (p < r - 1) {
        int q = randomPartition(arr, p, r - 1);
        randomQuickSort(arr, p, q);
        randomQuickSort(arr, q + 1, r);
    }

}


int randomPartition(int *arr, int p, int r) {
    std::default_random_engine e;
    std::uniform_int_distribution<int> u(p, r - 1);
    int ran = u(e);
    swap(&arr[r - 1], &arr[ran]);

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
