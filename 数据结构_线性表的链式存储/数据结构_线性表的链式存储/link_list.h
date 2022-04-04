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


//�ж��Ƿ�Ϊ��
int emp_linklist(linklist l);

//��������
void des_linklist(linklist* l);

//�������
void clear_linklist(linklist l);
//
//������
int length_linklist(linklist l);
//
//���ҵ�i��Ԫ��
data* search_linklist(linklist l, int i);

//��ֵ����
int search_by_value(linklist l, int i);

//����
int insert(linklist l, int i, data cc);

//ɾ��
int delete(linklist l, int i);

//ͷ�巨
linklist head_inset(linklist l,int n);

//β�巨
linklist final_insert(linklist l,int n);

//��βָ��ѭ������ĺϲ�
linklist connect(linklist l, linklist p);
#endif