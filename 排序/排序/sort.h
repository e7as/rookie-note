#pragma once
#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 8

typedef struct
{
	int Key;
}RedType;

typedef struct
{
	RedType r[MAXSIZE + 1];
	int length;
}Sqlist;

//初始化数组
void ini_sort(Sqlist* s);

//插入排序
void insert_sort(Sqlist* s);

//二分插入排序
void di_inset_sort(Sqlist* a);

//希尔插入
void shell_sert(Sqlist* s, int t);

//希尔排序
void shell_sort(Sqlist* s,int dlat[],int t);

//冒泡排序
void pop_sort(Sqlist* s);

//快速排序
void fast_sort(Sqlist* s,int low ,int high);

//快速排序分左右子表
int partition_fast(Sqlist* s, int low, int high);

//简单选择排序
void ez_select_sort(Sqlist* s);



//输出数组
void output_sort(Sqlist* s);
#endif // !__TUSH__
