#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
typedef struct HTnode //创建根节点，包括权重、双亲、左孩子和右孩子。
{
	int weight;
	int parent;
	int lchild;
	int rchild;
}htnode, *hftree;

//创建哈夫曼树
void createhftree(hftree* h);

#endif // !__NUSH__
