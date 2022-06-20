#include"graph.h"

//ͷ�巨�����ڽӱ�
 void insert(int a,int c, grophnode* g, int b)
{
	sidenode* t = NULL ;
	t = (sidenode*)malloc(sizeof(sidenode));
	t->adjver = c;
	t->nextside = g->v[a].next;
	g->v[a].next = t;
	t->weight = b;
}

//���±�
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


//��ʼ��������
static void ini_adjlist(grophnode* g)
{
	int ch;
	int i = 0;
	int gg = 0;
	gg = scanf("%d%d", &g->verNum, &g->sideNum);
	while ((ch = getchar()) != '\n' && ch != EOF)//��ջ�����
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

//�ұ߶�Ӧ�ڵ���±�
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

//����������
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
	gg=scanf("%d%d", (int*)&(g->vernum),(int*)&(g->snum));//���붥������ͱ߸���
	while ((ch = getchar()) != '\n' && ch != EOF)//��ջ�����
	{
		;
	}
	for (i = 0; i < g->vernum; i++)//���붥��Ԫ��
	{
		gg=scanf("%c", &(g->vertax[i]));
	}
	ini_graph(g);//��ʼ���ڽӾ���
	for (i = 0; i < g->vernum; i++)
	{
		while ((ch = getchar()) != '\n' && ch != EOF)//��ջ�����
		{
			;
		}
			gg=scanf("%c %c %d",&jk,&kj,&w);//�������������ӵ������㣬����Ȩ��
			search_underline(&v1,&jk,g);//Ѱ��������������±�
			search_underline(&v2, &kj,g);
			g->side[v1][v2] = w;//�����ڽӾ���
			g->side[v2][v1] = g->side[v1][v2];
	}
}

//�������������ڽӱ�
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
		while ((ch = getchar()) != '\n' && ch != EOF)//��ջ�����
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
