#ifndef __TUSH__
#define __TUSH__
#define MAXSIZE 255
#define MAXLENGTH 80
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//˳��
typedef struct string
{
	char ch[MAXSIZE+1];
	int length;
}sstring;

//��ѯ�Ӵ�λ��
int search_string(sstring* ch, sstring* ch1);

//����
typedef struct linklist
{
	char ch[MAXLENGTH];
	struct linklist* next;
}lnode;

typedef struct xiuxiu
{
	lnode* head;
	lnode* tail;
	int size;
}linklist;

//kmp�㷨
int kmp_string(sstring* ch, sstring* ch1,int* a);

//��ȡnext��i��
void getnext(sstring* ch1, int* cc);

//����

#endif