#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
typedef struct data
{
	int a;
	int b;
	char d[10];
}data;

typedef struct linklist
{
	data c;
	struct linklist* next;
}lnode,*linklist;


//判断是否为空
int emp_linklist(linklist l);

//销毁链表
void des_linklist(linklist* l);

//清空链表
void clear_linklist(linklist l);
//
//链表长度
int length_linklist(linklist l);
//
//查找第i个元素
data* search_linklist(linklist l, int i);

//按值查找
int search_by_value(linklist l, int i);

//插入
int insert(linklist l, int i, data cc);

//删除
int delete(linklist l, int i);

//头插法
linklist head_inset(linklist l,int n);

//尾插法
linklist final_insert(linklist l,int n);

//带尾指针循环链表的合并
linklist connect(linklist l, linklist p);
#endif