/**
 * file:    lib_sort.c
 * author:  wallying@foxmail.com
 * date:    2019-12-24
 **/


#include "lib_sort.h"


/*******************************************************************************
ð������ԭ��:
    1.�����ڴ�����������,��ǰ�������αȽ���������Ԫ��,�����Ԫ�س��뵽ĩβλ��;
    2.Ȼ������ʣ�������������,���¿�ʼ��ǰ�������αȽ���������Ԫ��,
      ���������Ԫ�س��뵽���������е�����;
    3.�Դ�����,ֱ������Ԫ�ؾ��������.
ʱ�临�Ӷ�: ƽ��O(n^2);���O(n);�O(n^2)
�ռ临�Ӷ�: O(1)
�㷨�ȶ���: �ȶ�
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
��������ԭ��:
    1.���ȴӴ�����������ȡ����Ԫ��,�ŵ��������е���ʼλ��;
    2.Ȼ���ٴ�ʣ������������м���ȡ����Ԫ��,�������������еĺ���λ�ô�����;
    3.�Դ�����,ֱ������Ԫ�ؾ��������.
ʱ�临�Ӷ�: ƽ��O(n^2);���O(n);�O(n^2)
�ռ临�Ӷ�: O(1)
�㷨�ȶ���: �ȶ�
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
ѡ������ԭ��:
    1.���ȴӴ������������ҳ���СԪ��,���ŵ��������е���ʼλ��;
    2.Ȼ���ٴ�ʣ������������м����ҳ���СԪ��,���ŵ����������е���β;
    3.�Դ�����,ֱ������Ԫ�ؾ��������.
ʱ�临�Ӷ�: ƽ��O(n^2);���O(n^2);�O(n^2)
�ռ临�Ӷ�: O(1)
�㷨�ȶ���: ���ȶ�
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
