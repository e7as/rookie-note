#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1000

typedef struct stack
{
	int* base;
	int* top;
	int stacksize;
}stack;

//初始化顺序栈
void ini_stack(stack* l);

//判断顺序栈是否为空,0为空，1不为空
int emp_stack(const stack* l);

//求顺序栈的长度
int length_stack(const stack* l);

//清空顺序栈
void clear_stack(stack* l);

//销毁顺序栈
void des_stack(stack* l);

//顺序表的入栈
int push1(stack* l,int a);

//顺序表的出栈
void pop1(stack* l,int* a);



typedef struct linklist
{
	int b;
	struct linklist* next;
}lnode,*linklist;

//初始化链栈
linklist ini_linklist1(linklist l);

//判断链栈是否为空,0为空，1为非空
int emp_linklist(linklist);

//求链栈的长度
int lengthe_linklist(linklist l);

//清空链栈
void clear_linklist(linklist l);

//销毁链栈
void des_linklist(linklist* l);

//链栈的入栈
linklist pull_linklist(linklist l, int a);

//链栈的出栈
int pop_linklist(linklist* l);
#endif