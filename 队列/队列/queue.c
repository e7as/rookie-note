#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

//初始化队列
void ini_queue(queue* p)
{
	p->l = (int*)malloc(sizeof(int)*MAXQSIZE);
	p->front = 0;
	p->rear = 0;
}

//队列长度
int length_queue(queue* p)
{
	return (p->rear + MAXQSIZE - p->front) % MAXQSIZE;
}

//入队算法
void enqueue(queue* p,int a)
{
	if ((p->rear + 1) % 6 == p->front)
		return;
	p->l[p->rear] = a;
	p->rear = (p->rear+1) % 6;
}

//出队算法
void dequeue(queue*p)
{
	if (p->front == p->rear)
		return;
	p->front = (p->front + 1) % 6;
}

//链队列
//初始化链队列
void ini_linklist(linkqueue* p)
{
	p->front = (linklist)malloc(sizeof(lnode));
	p->rear = p->front;
	p->front->next = NULL;
}

//判断是否为空,0为空，1为非空
int emp_linklist(linkqueue* p)
{
	if (p->front == p->rear)
		return 0;
	return 1;
}

//链队列的销毁
void des_linkqueue(linkqueue* p)
{
	linklist l = p->front;
	while (p->front)
	{
		p->front = p->front->next;
		free(l);
		l = p->front;
	}
	p->rear = NULL;
}

//入队列
void en_linklist(linkqueue* p,int a)
{
	linklist l = NULL;
	l = (linklist)malloc(sizeof(lnode));
	l->next = NULL;
	l->c = a;
	p->rear->next = l;
}

//出队列
void de_linklist(linkqueue* p)
{
	linklist l = p->front->next;
	if (p->front == p->rear)
		return;
	p->front->next = p->front->next->next;
	if (p->rear == l)
		p->rear = p->front;
	free(l);
}
