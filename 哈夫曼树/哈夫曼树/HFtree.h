#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 10

typedef struct hfnode
{
	char hafcode[MAXSIZE / 2];
}hfnode,*hfcode;

typedef struct HTnode //创建根节点，包括权重、双亲、左孩子和右孩子。
{
	int weight;
	int parent;
	int lchild;
	int rchild;
}htnode, *hftree;

//创建哈夫曼树
void createhftree(hftree* h);

//获得哈夫曼编码
void geth_fcode(hftree h, hfcode* hf);

//输出哈夫曼编码
void input_hfcode(hfcode hf);
#endif // !__NUSH__
