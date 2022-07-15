#pragma warning(disable:6031)
#pragma once
#ifndef __NUSH__
#define __NUSH__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXINT 32767
#define MVNUM 10

//图的数据结构，顺序存储
typedef struct granode
{
	char vertax[MVNUM];//顶点元素
	int side[MVNUM][MVNUM];//邻接矩阵
	int vernum;//顶点个数
	int snum;//边的个数
}graph;

//创建无向图
void create_graph(graph* g);

//边的存储
typedef struct sidenode
{
	int adjver;
	int weight;
	struct sidenode* nextside;
}sidenode;

//节点的存储
typedef struct vernode
{
	char ver;
	sidenode* next;
}vernode, verlist[MVNUM];

//图的链式存储（邻接表）
typedef struct
{
	verlist v;
	int verNum;
	int sideNum;
}grophnode;

//创立无向网（邻接表）
void create_gra(grophnode* g);

//深度优先搜索（临界矩阵）
void dfs(graph* g, int a,int path[6]);

//深度优先搜索（邻接表）
void dfs_list(grophnode* g, int a, int path[6],sidenode* l);
#endif // __NUSH__

