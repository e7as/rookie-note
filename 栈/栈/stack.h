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
int push1(stack* l,int a);

//˳���ĳ�ջ
void pop1(stack* l,int* a);



typedef struct linklist
{
	int b;
	struct linklist* next;
}lnode,*linklist;

//��ʼ����ջ
linklist ini_linklist1(linklist l);

//�ж���ջ�Ƿ�Ϊ��,0Ϊ�գ�1Ϊ�ǿ�
int emp_linklist(linklist);

//����ջ�ĳ���
int lengthe_linklist(linklist l);

//�����ջ
void clear_linklist(linklist l);

//������ջ
void des_linklist(linklist* l);

//��ջ����ջ
linklist pull_linklist(linklist l, int a);

//��ջ�ĳ�ջ
int pop_linklist(linklist* l);
#endif