#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int a;
	struct tree* lchild;
	struct tree* rchild;
}binode, * bitree;

//��ʼ��������
void ini_bitree(bitree b);

//����������
int search_bitree(bitree b,int c);

//�����ݹ������
bitree search1_bitree(bitree b, int c);

//��������������ڵ�
void insert_bitree(bitree b, int c);

//����������ɾ���ڵ�
void delete_bitree(bitree b, int c);
