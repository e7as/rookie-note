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

//初始化队列
void ini_queue(queue* p);

//队列长度
int length_queue(queue* p);

//入队算法
void enqueue(queue* p, Bitree a);

//出队算法
Bitree dequeue(queue*p);


//初始化顺序栈
void ini_stack(stack* l);

//判断顺序栈是否为空,0为空，1不为空
int emp_stack(const stack* l);

//求顺序栈的长度
int length_stack(const stack* l);

//清空顺序栈
void clear_stack(stack* l);

//销毁顺序栈
void des_stack(stack* l);

//顺序表的入栈
int push1(stack* l, Bitree a);

//顺序表的出栈
void pop1(stack* l, Bitree* a);

//初始化树
void CreateBitree(Bitree* b);

//先序递归遍历二叉树
void PreOrderTraverse(Bitree b);

//获取节点的值
void getvisit(Bitree b);

//中序递归遍历二叉树
void INOrderTraverse(Bitree b);

//后序递归遍历二叉树
void PostOrderTraverse(Bitree b);

//先序非递归遍历二叉树
void pretra(Bitree b,stack* d);

//中序非递归遍历二叉树
void inordertra(Bitree b, stack* d);

//后序非递归遍历二叉树
void posttra(Bitree b, stack* d);

//层次遍历二叉树
void gratra(Bitree b, queue* d);

//先序创建二叉树
void precreatbitree(Bitree* b);

//复制二叉树
void copybitree(Bitree b,Bitree*c );

//二叉树的深度
int depthbitree(Bitree b);

//二叉树的节点数
int nodenum(Bitree b);

//叶子节点数
int leafnum(Bitree b);
#endif
