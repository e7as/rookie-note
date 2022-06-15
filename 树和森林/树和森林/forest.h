#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
//双亲表示法
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

//孩子链表  //带双亲的孩子链表
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

//二叉树表示法、二叉链表表示法
typedef struct Fonode
{
	int a;
	struct Fonode* fchild;
	struct Fonode* bro;
}fnode, *flink;


//创建树
void createforest(flink* f);
#endif // !__NUSH__
