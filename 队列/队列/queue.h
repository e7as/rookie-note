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

//��ʼ������
void ini_queue(queue* p);

//���г���
int length_queue(queue* p);

//����㷨
void enqueue(queue* p,int a);

//�����㷨
void dequeue(queue*p);

//������
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

//��ʼ��������
void ini_linklist(linkqueue* p);

//�ж��Ƿ�Ϊ��,0Ϊ�գ�1Ϊ�ǿ�
int emp_linklist(linkqueue* p);

//�����е�����
void des_linkqueue(linkqueue* p);

//�����
void en_linklist(linkqueue* p,int a);

//������
void de_linklist(linkqueue* p);
#endif