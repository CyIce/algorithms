//
// Created by CyIce on 2018/9/7.
//

#include "inversion.h"
#include<iostream>

void count(int *arr, int l, int m, int r, int &num) {
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
    for (k = l; k <= r; k++) {
        if (L[i] > R[j]) {
            arr[k] = R[j++];
//            归并排序过程即为修正逆序对的过程，原数组的逆序对数为排序所修正的逆序对数目
            num += n1 - i;
        } else {
            arr[k] = L[i++];
        }
    }
}

void inversion(int *arr, int l, int r, int &num) {
    if (l < r) {
        int m = (l + r) / 2;
        inversion(arr, l, m, num);
        inversion(arr, m + 1, r, num);
        count(arr, l, m, r, num);
    }
}
