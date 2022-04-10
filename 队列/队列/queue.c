#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

//��ʼ������
void ini_queue(queue* p)
{
	p->l = (int*)malloc(sizeof(int)*MAXQSIZE);
	p->front = 0;
	p->rear = 0;
}

//���г���
int length_queue(queue* p)
{
	return (p->rear + MAXQSIZE - p->front) % MAXQSIZE;
}

//����㷨
void enqueue(queue* p,int a)
{
	if ((p->rear + 1) % 6 == p->front)
		return;
	p->l[p->rear] = a;
	p->rear = (p->rear+1) % 6;
}

//�����㷨
void dequeue(queue*p)
{
	if (p->front == p->rear)
		return;
	p->front = (p->front + 1) % 6;
}

//������
//��ʼ��������
void ini_linklist(linkqueue* p)
{
	p->front = (linklist)malloc(sizeof(lnode));
	p->rear = p->front;
	p->front->next = NULL;
}

//�ж��Ƿ�Ϊ��,0Ϊ�գ�1Ϊ�ǿ�
int emp_linklist(linkqueue* p)
{
	if (p->front == p->rear)
		return 0;
	return 1;
}

//�����е�����
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

//�����
void en_linklist(linkqueue* p,int a)
{
	linklist l = NULL;
	l = (linklist)malloc(sizeof(lnode));
	l->next = NULL;
	l->c = a;
	p->rear->next = l;
}

//������
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
