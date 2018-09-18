#include <iostream>
//插入排序
#include "chapterTwo/insertionSort/insertionSort.h"
//选择算法
#include "chapterTwo/selectSort/selectSort.h"
//归并排序
#include "chapterTwo/mergeSort/mergeSort.h"
//冒泡排序
#include "chapterTwo/bubbleSort/bubbleSort.h"
//计算逆序对
#include "chapterTwo/inversion/inversion.h"
//测试快速排序
#include "chapterSeven/quickSort/quickSort.h"
//
#include "chapterSeven/randomQuickSort/randomQuickSort.h"
//
#include "chapterEight/countingSort/countingSort.h"

//测试插入排序
void testInsertionSort() {
    std::cout<<"插入排序:  ";
    int a[] = {-1, 23, -5, -3, -6, 66};
    insertionSort(a, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
    insertionSort(a, length(a), false);
//    for (int i : a) {
//        std::cout << i << "  ";
//    }
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
    std::cout<<"合并排序:  ";
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

//计算逆序对的数量
void testInversion() {
    int a[] = {2, 3, 8, 6, 1};
    int num = 0;
    inversion(a, 0, length(a) - 1, num);
    std::cout << num << std::endl;
}

//快速排序
void testQuickSort() {
    std::cout<<"快速排序:  ";
    int a[] = {2, 3, 8, 6, 1, 66, 9, -1, -2, -10086, 1};
    quickSort(a, 0, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
}

//随机化快速排序
void testRandomQuickSort() {
    std::cout<<"随机化快速排序:  ";
    int a[] = {2, 3, 8, 6, 1, 66, 9, -1, -2, -10086, 1};
    randomQuickSort(a, 0, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
}

//计数排序
void testCountingSort() {
    std::cout<<"计数排序:  ";
    int a[] = {2, 3, 8, 6, 1, 66, 9, 1, 8, 0};
    countingSort(a, length(a));
    for (int i : a) {
        std::cout << i << "  ";
    }
    std::cout << std::endl;
}

int main() {
    testInsertionSort();
    testMergeSort();
    testQuickSort();
    testRandomQuickSort();
    testCountingSort();
    return 0;
}