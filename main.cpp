#include <iostream>

//插入排序
#include "chapterTwo/insertionSort/insertionSort.h"
//选择算法
#include "chapterTwo/selectSort/selectSort.h"
//归并排序
#include "chapterTwo/mergeSort/mergeSort.h"
//冒泡排序
#include "chapterTwo/bubbleSort/bubbleSort.h"

//测试插入排序
void testInsertionSort() {
    int a[] = {-1, 23, -5, -3, -6, 66};
    insertionSort(a, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
    insertionSort(a, length(a), false);
    for (int i : a) {
        std::cout << i << "  ";
    }
}

//测试选择算法
void testSelectSort() {
    int a[] = {-1, 23, -5, -3, -6, 98, 66};
    selectSort(a, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
}

//测试归并排序
void testMergeSort() {
    int a[] = {-1, 23, -5, -3, -6, 98, 66, 0, 44, 3, -3};
    mergeSort(a, 0, length(a) - 1);
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
}

//测试冒泡排序
void testBubbleSort() {
    int a[] = {-1, 23, -5, -3, -6, 98, 66, 0, 44, 3, -3};
    bubbleSort(a, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
}

int main() {



    return 0;
}