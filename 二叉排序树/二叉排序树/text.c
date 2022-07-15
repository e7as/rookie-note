#define _CRT_SECURE_NO_WARNINGS
#include"tree.h"
int main()
{
	int c = 0;
	int a = 0;
	bitree g = NULL;
	bitree b = (bitree)malloc(sizeof(binode));
	b->lchild = NULL;
	b->rchild = NULL;
	ini_bitree(b);
	c=scanf("%d", &a);
	//c=search_bitree(b,a);
	g = search1_bitree(b, a);
	if (g)
		printf("%d", g->a);
	else
		printf("0");
	return 0;
}
