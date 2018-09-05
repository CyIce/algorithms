#include <iostream>

//插入排序
#include "chapterTwo/insertionSort/insertionSort.h"

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

int main() {


    return 0;
}