#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXQSIZE 100

typedef struct queue
{
	int* l;
	int front;
	int rear;
}queue;

//初始化队列
void ini_queue(queue* p);

//队列长度
int length_queue(queue* p);

//入队算法
void enqueue(queue* p,int a);

//出队算法
void dequeue(queue*p);

//链队列
typedef struct linklist
{
	int c;
	struct linklist* next;
}lnode,*linklist;

typedef struct linkqueue
{
	linklist front;
	linklist rear;
}linkqueue;

//初始化链队列
void ini_linklist(linkqueue* p);

//判断是否为空,0为空，1为非空
int emp_linklist(linkqueue* p);

//链队列的销毁
void des_linkqueue(linkqueue* p);

//入队列
void en_linklist(linkqueue* p,int a);

//出队列
void de_linklist(linkqueue* p);
#endif