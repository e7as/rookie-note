#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
typedef struct HTnode //�������ڵ㣬����Ȩ�ء�˫�ס����Ӻ��Һ��ӡ�
{
	int weight;
	int parent;
	int lchild;
	int rchild;
}htnode, *hftree;

//������������
void createhftree(hftree* h);

#endif // !__NUSH__
