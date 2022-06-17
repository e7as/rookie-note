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

typedef struct HTnode //�������ڵ㣬����Ȩ�ء�˫�ס����Ӻ��Һ��ӡ�
{
	int weight;
	int parent;
	int lchild;
	int rchild;
}htnode, *hftree;

//������������
void createhftree(hftree* h);

//��ù���������
void geth_fcode(hftree h, hfcode* hf);

//�������������
void input_hfcode(hfcode hf);
#endif // !__NUSH__
