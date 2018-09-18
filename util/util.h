#pragma once
//
// Created by CyIce on 2018/9/5.
//

#ifndef ALGORITHMS_UTIL_H
#define ALGORITHMS_UTIL_H

#endif //ALGORITHMS_UTIL_H

#include<cstdlib>
#include<ctime>

/*
 * 计算数组的长度
 */
template<class T>
int length(T &arr) {
    return sizeof(arr) / sizeof(arr[0]);
}

/*
 * 交换两个变量的值
 */
template<class T>
void swap(T *a, T *b) {
    T tmp = *b;
    *b = *a;
    *a = tmp;
}

