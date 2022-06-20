#include"graph.h"

//头插法插入邻接表
 void insert(int a,int c, grophnode* g, int b)
{
	sidenode* t = NULL ;
	t = (sidenode*)malloc(sizeof(sidenode));
	t->adjver = c;
	t->nextside = g->v[a].next;
	g->v[a].next = t;
	t->weight = b;
}

//找下标
static void search(int* z, char* k,grophnode* g)
{
	int i = 0;
	for (i = 0; i < g->verNum; i++)
	{
		if (g->v[i].ver == *k)
		{
			*z = i;
			return;
		}
	}

}


//初始化无向网
static void ini_adjlist(grophnode* g)
{
	int ch;
	int i = 0;
	int gg = 0;
	gg = scanf("%d%d", &g->verNum, &g->sideNum);
	while ((ch = getchar()) != '\n' && ch != EOF)//清空缓存区
	{
		;
	}
	for (i = 0; i < g->verNum; i++)
	{
		gg = scanf("%c", &g->v[i].ver);
		g->v[i].next = NULL;
	}
}

static void ini_graph(graph* g)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < g->vernum; i++)
	{
		for (j = 0; j < g->vernum; j++)
		{
			g->side[i][j] = MAXINT;
		}
	}
}

//找边对应节点的下标
static void search_underline(int* v, char* g,graph* bb)
{
	int i = 0;
	for (i = 0; i < bb->vernum; i++)
	{
		if ((bb->vertax[i])== *g)
		{
			*v = i;
			return;
		}
	}
}

//创建无向网
void create_graph(graph* g)
{
	int gg = 0;
	int i = 0;
	char jk ;
	char kj ;
	int w = 0;
	int v1 = 0;
	int v2 = 0;
	int ch = 0;
	gg=scanf("%d%d", (int*)&(g->vernum),(int*)&(g->snum));//输入顶点个数和边个数
	while ((ch = getchar()) != '\n' && ch != EOF)//清空缓存区
	{
		;
	}
	for (i = 0; i < g->vernum; i++)//输入顶点元素
	{
		gg=scanf("%c", &(g->vertax[i]));
	}
	ini_graph(g);//初始化邻接矩阵
	for (i = 0; i < g->vernum; i++)
	{
		while ((ch = getchar()) != '\n' && ch != EOF)//清空缓存区
		{
			;
		}
			gg=scanf("%c %c %d",&jk,&kj,&w);//输入这条边连接的两个点，输入权重
			search_underline(&v1,&jk,g);//寻找这两个顶点的下标
			search_underline(&v2, &kj,g);
			g->side[v1][v2] = w;//构造邻接矩阵
			g->side[v2][v1] = g->side[v1][v2];
	}
}

//创立无向网（邻接表）
void create_gra(grophnode* g)
{
	char ch;
	int i = 0;
	int gg = 0;
	char j, k;
	int v1 = 0;
	int v2 = 0;
	int w = 0;
	ini_adjlist(g);
	for (i = 0; i < g->sideNum; i++)
	{
		while ((ch = getchar()) != '\n' && ch != EOF)//清空缓存区
		{
			;
		}
		gg = scanf("%c%c%d", &j, &k, &w);
		search(&v1, &j, g);
		search(&v2, &k, g);
		insert(v1,v2, g, w);
		insert(v2,v1, g, w);
	}
}
