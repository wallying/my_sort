/**
 * file:    lib_sort.c
 * author:  wallying@foxmail.com
 * date:    2019-12-24
 **/


#include "lib_sort.h"


/*******************************************************************************
冒泡排序原理:
    1.首先在待排序序列中,从前往后依次比较相邻两个元素,将最大元素沉入到末尾位置;
    2.然后再在剩余待排序序列中,重新开始从前往后依次比较相邻两个元素,
      继续将最大元素沉入到已排序序列的列首;
    3.以此类推,直到所有元素均排序完毕.
时间复杂度: 平均O(n^2);最好O(n);最坏O(n^2)
空间复杂度: O(1)
算法稳定性: 稳定
*******************************************************************************/
void sort_bubble(void *buf, unsigned int num, unsigned int size)
{
    unsigned int i = 0, j = 0;

    if (size == sizeof(unsigned char)) {
        unsigned char *ptr = buf;
        unsigned char tmp = 0;
        for (i = 0; i < num - 1; ++i) {
            for (j = 0; j < num - 1 - i; ++j) {
                if (ptr[j] > ptr[j + 1]) {
                    tmp = ptr[j];
                    ptr[j] = ptr[j + 1];
                    ptr[j + 1] = tmp;
                }
            }
        }
    } else if (size == sizeof(unsigned short)) {
        unsigned short *ptr = buf;
        unsigned short tmp = 0;
        for (i = 0; i < num - 1; ++i) {
            for (j = 0; j < num - 1 - i; ++j) {
                if (ptr[j] > ptr[j + 1]) {
                    tmp = ptr[j];
                    ptr[j] = ptr[j + 1];
                    ptr[j + 1] = tmp;
                }
            }
        }
    } else if (size == sizeof(unsigned int)) {
        unsigned int *ptr = buf;
        unsigned int tmp = 0;
        for (i = 0; i < num - 1; ++i) {
            for (j = 0; j < num - 1 - i; ++j) {
                if (ptr[j] > ptr[j + 1]) {
                    tmp = ptr[j];
                    ptr[j] = ptr[j + 1];
                    ptr[j + 1] = tmp;
                }
            }
        }
    }
}


/*******************************************************************************
插入排序原理:
    1.首先从待排序序列中取出首元素,放到排序序列的起始位置;
    2.然后再从剩余待排序序列中继续取出首元素,并在已排序序列的合适位置处插入;
    3.以此类推,直到所有元素均排序完毕.
时间复杂度: 平均O(n^2);最好O(n);最坏O(n^2)
空间复杂度: O(1)
算法稳定性: 稳定
*******************************************************************************/
void sort_insert(void *buf, unsigned int num, unsigned int size)
{
    unsigned int i = 0, j = 0;

    if (size == sizeof(unsigned char)) {
        unsigned char *ptr = buf;
        unsigned char tmp = 0;
        for (i = 1; i < num; ++i) {
            tmp = ptr[i];
            j = i;
            while ((j > 0) && (tmp < ptr[j - 1])) {
                ptr[j] = ptr[j - 1];
                --j;
            }
            ptr[j] = tmp;
        }
    } else if (size == sizeof(unsigned short)) {
        unsigned short *ptr = buf;
        unsigned short tmp = 0;
        for (i = 1; i < num; ++i) {
            tmp = ptr[i];
            j = i;
            while ((j > 0) && (tmp < ptr[j - 1])) {
                ptr[j] = ptr[j - 1];
                --j;
            }
            ptr[j] = tmp;
        }
    } else if (size == sizeof(unsigned int)) {
        unsigned int *ptr = buf;
        unsigned int tmp = 0;
        for (i = 1; i < num; ++i) {
            tmp = ptr[i];
            j = i;
            while ((j > 0) && (tmp < ptr[j - 1])) {
                ptr[j] = ptr[j - 1];
                --j;
            }
            ptr[j] = tmp;
        }
    }
}


/*******************************************************************************
选择排序原理:
    1.首先从待排序序列中找出最小元素,并放到排序序列的起始位置;
    2.然后再从剩余待排序序列中继续找出最小元素,并放到已排序序列的列尾;
    3.以此类推,直到所有元素均排序完毕.
时间复杂度: 平均O(n^2);最好O(n^2);最坏O(n^2)
空间复杂度: O(1)
算法稳定性: 不稳定
*******************************************************************************/
void sort_select(void *buf, unsigned int num, unsigned int size)
{
    unsigned int i = 0, j = 0;

    if (size == sizeof(unsigned char)) {
        unsigned char *ptr = buf;
        unsigned char tmp = 0;
        unsigned char min = 0;
        for (i = 0; i < num - 1; ++i) {
            min = i;
            for (j = i + 1; j < num; ++j) {
                if (ptr[j] < ptr[min]) {
                    min = j;
                }
            }
            if (i != min) {
                tmp = ptr[i];
                ptr[i] = ptr[min];
                ptr[min] = tmp;
            }
        }
    } else if (size == sizeof(unsigned short)) {
        unsigned short *ptr = buf;
        unsigned short tmp = 0;
        unsigned short min = 0;
        for (i = 0; i < num - 1; ++i) {
            min = i;
            for (j = i + 1; j < num; ++j) {
                if (ptr[j] < ptr[min]) {
                    min = j;
                }
            }
            if (i != min) {
                tmp = ptr[i];
                ptr[i] = ptr[min];
                ptr[min] = tmp;
            }
        }
    } else if (size == sizeof(unsigned int)) {
        unsigned int *ptr = buf;
        unsigned int tmp = 0;
        unsigned int min = 0;
        for (i = 0; i < num - 1; ++i) {
            min = i;
            for (j = i + 1; j < num; ++j) {
                if (ptr[j] < ptr[min]) {
                    min = j;
                }
            }
            if (i != min) {
                tmp = ptr[i];
                ptr[i] = ptr[min];
                ptr[min] = tmp;
            }
        }
    }
}
