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

//��ʼ��˫������
linklist ini_linklist(linklist l);

//�ж��Ƿ�Ϊ��
int emp_linklist(linklist l);

//��������
void des_linklist(linklist* l);

//�������
void clear_linklist(linklist l);

//������
int length_linklist(linklist l);

//���ҵ�i��Ԫ��
linklist search(linklist l, int i);

//��ֵ����
int search_value(linklist l, int i);

//˫������Ĳ���
int insert(linklist l, int i,data cc);

//˫�������ɾ��
int delete_linklist(linklist l, int i);

//��������
void qsort_1(linklist l);
#endif