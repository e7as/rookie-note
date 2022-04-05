#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int a;
	int b;
}data;

typedef struct lnode
{
	data c;
	struct lnode* next;
	struct lnode* last;
}lnode,*linklist;

//初始化双向链表
linklist ini_linklist(linklist l);

//判断是否为空
int emp_linklist(linklist l);

//销毁链表
void des_linklist(linklist* l);

//清空链表
void clear_linklist(linklist l);

//链表长度
int length_linklist(linklist l);

//查找第i个元素
linklist search(linklist l, int i);

//按值查找
int search_value(linklist l, int i);

//双向链表的插入
int insert(linklist l, int i,data cc);

//双向链表的删除
int delete_linklist(linklist l, int i);

//链表排序
void qsort_1(linklist l);
#endif