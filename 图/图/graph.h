#pragma warning(disable:6031)
#pragma once
#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXINT 32767
#define MVNUM 10

//ͼ�����ݽṹ��˳��洢
typedef struct granode
{
	char vertax[MVNUM];//����Ԫ��
	int side[MVNUM][MVNUM];//�ڽӾ���
	int vernum;//�������
	int snum;//�ߵĸ���
}graph;

//��������ͼ
void create_graph(graph* g);

//�ߵĴ洢
typedef struct sidenode
{
	int adjver;
	int weight;
	struct sidenode* nextside;
}sidenode;

//�ڵ�Ĵ洢
typedef struct vernode
{
	char ver;
	sidenode* next;
}vernode, verlist[MVNUM];

//ͼ����ʽ�洢���ڽӱ�
typedef struct
{
	verlist v;
	int verNum;
	int sideNum;
}grophnode;

//�������������ڽӱ�
void create_gra(grophnode* g);

//��������������ٽ����
void dfs(graph* g, int a,int path[6]);

//��������������ڽӱ�
void dfs_list(grophnode* g, int a, int path[6],sidenode* l);
#endif // __NUSH__

