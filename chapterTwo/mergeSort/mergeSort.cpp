//
// Created by CyIce on 2018/9/6.
//

#include "mergeSort.h"

void merge(int *arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1 + 1], R[n2 + 1];
    int k = 0;

    for (int i = l; i <= m; i++) {
        L[k] = arr[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++) {
        R[k] = arr[i];
        k++;
    }
    int i = 0, j = 0;
    L[n1] = R[n2] = INT_MAX;
    for (int k = l; k <= r; k++) {
        arr[k] = L[i] <= R[j] ? L[i++] : R[j++];
    }

}

void mergeSort(int *arr, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);

    }
}