/**
 * file:    main.c
 * author:  wallying@foxmail.com
 * date:    2019-12-25
 **/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "lib_sort.h"


#define DATA_NUM (10)
int srcData[DATA_NUM] = {0x00};
int cpyData[DATA_NUM] = {0x00};


int main(int argc, char *argv[])
{
    printf("hello lib_sort!\n");

    srand(time(NULL));
    for (int i=0; i<DATA_NUM; ++i) {
        srcData[i] = rand() % 100;
    }
    printf("random_data: ");
    for (int i=0; i<DATA_NUM; ++i) {
        printf("%3d ", srcData[i]);
    }
    printf("\n");

    /*=============================================*/
    printf("sort_bubble: ");
    memcpy(cpyData, srcData, sizeof(srcData));

    sort_bubble(cpyData, DATA_NUM, sizeof(cpyData[0]));

    for (int i=0; i<DATA_NUM; ++i) {
        printf("%3d ", cpyData[i]);
    }
    printf("\n");


    /*=============================================*/
    printf("sort_insert: ");
    memcpy(cpyData, srcData, sizeof(srcData));

    sort_insert(cpyData, DATA_NUM, sizeof(cpyData[0]));

    for (int i=0; i<DATA_NUM; ++i) {
        printf("%3d ", cpyData[i]);
    }
    printf("\n");


    /*=============================================*/
    printf("sort_select: ");
    memcpy(cpyData, srcData, sizeof(srcData));

    sort_select(cpyData, DATA_NUM, sizeof(cpyData[0]));

    for (int i=0; i<DATA_NUM; ++i) {
        printf("%3d ", cpyData[i]);
    }
    printf("\n");


    return 0;
}
