#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define MAXSIZE 100
//typedef int BiTree[MAXSIZE];
//typedef BiTree bt;
#define MAX_SIZE 1000
#define MAXQSIZE 100
typedef struct BiNode
{
	struct BiNode* lchild;
	struct BiNode* rchild;
	struct BiNode* parent;
	int a;
}Binode, *Bitree;

typedef struct queue
{
	Bitree* l;
	int front;
	int rear;
}queue;

typedef struct stack
{
	Bitree* base;
	Bitree* top;
	int stacksize;
}stack;

//��ʼ������
void ini_queue(queue* p);

//���г���
int length_queue(queue* p);

//����㷨
void enqueue(queue* p, Bitree a);

//�����㷨
Bitree dequeue(queue*p);


//��ʼ��˳��ջ
void ini_stack(stack* l);

//�ж�˳��ջ�Ƿ�Ϊ��,0Ϊ�գ�1��Ϊ��
int emp_stack(const stack* l);

//��˳��ջ�ĳ���
int length_stack(const stack* l);

//���˳��ջ
void clear_stack(stack* l);

//����˳��ջ
void des_stack(stack* l);

//˳������ջ
int push1(stack* l, Bitree a);

//˳���ĳ�ջ
void pop1(stack* l, Bitree* a);

//��ʼ����
void CreateBitree(Bitree* b);

//����ݹ����������
void PreOrderTraverse(Bitree b);

//��ȡ�ڵ��ֵ
void getvisit(Bitree b);

//����ݹ����������
void INOrderTraverse(Bitree b);

//����ݹ����������
void PostOrderTraverse(Bitree b);

//����ǵݹ����������
void pretra(Bitree b,stack* d);

//����ǵݹ����������
void inordertra(Bitree b, stack* d);

//����ǵݹ����������
void posttra(Bitree b, stack* d);

//��α���������
void gratra(Bitree b, queue* d);

//���򴴽�������
void precreatbitree(Bitree* b);

//���ƶ�����
void copybitree(Bitree b,Bitree*c );

//�����������
int depthbitree(Bitree b);

//�������Ľڵ���
int nodenum(Bitree b);

//Ҷ�ӽڵ���
int leafnum(Bitree b);
#endif
