#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
//˫�ױ�ʾ��
typedef struct PTnode
{
	int a;
	int parent;
}PTnode;

typedef struct pl
{
	PTnode ptnode[MAXSIZE];
	int length;
	int r;
};

//��������  //��˫�׵ĺ�������
typedef struct CTnode
{
	int a;
	struct  Ctnode* next;
}*childptr;

typedef struct Panode
{
	int a;
	childptr c;
	int pp;
}ctbox;

typedef struct
{
	ctbox cc[MAXSIZE];
	int length;
	int r;
};

//��������ʾ�������������ʾ��
typedef struct Fonode
{
	int a;
	struct Fonode* fchild;
	struct Fonode* bro;
}fnode, *flink;


//������
void createforest(flink* f);
#endif // !__NUSH__
