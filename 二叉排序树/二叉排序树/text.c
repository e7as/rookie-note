#define _CRT_SECURE_NO_WARNINGS
#include"tree.h"
int main()
{
	int c = 63;
	int a = 0;
	int s = 0;
	bitree g = NULL;
	bitree b = (bitree)malloc(sizeof(binode));
	b->lchild = NULL;
	b->rchild = NULL;
	ini_bitree(b);
	//insert_bitree(b, c);
	c=scanf("%d", &a);
	s=search_bitree(b,a);
	//g = search1_bitree(b, a);
	//if (g)
	//	printf("%d", g->a);
	//else
	//	printf("0");
	printf("%d", s);
	return 0;
}
