#include"tree.h"


//³õÊ¼»¯¶þ²æÊ÷
void ini_bitree(bitree b)
{
	b->a = 60;
	b->lchild = (bitree)malloc(sizeof(binode));
	b->rchild = (bitree)malloc(sizeof(binode));
	b->lchild->a = 31;
	b->rchild->a = 70;
	b->lchild->lchild = (bitree)malloc(sizeof(binode));
	b->lchild->rchild = (bitree)malloc(sizeof(binode));
	b->lchild->lchild->a = 5;
	b->lchild->rchild->a = 34;
	b->lchild->rchild->lchild = (bitree)malloc(sizeof(binode));
	b->lchild->rchild->rchild = (bitree)malloc(sizeof(binode));
	b->lchild->rchild->lchild->a = 33;
	b->lchild->rchild->rchild->a = 50;
	b->rchild->lchild = (bitree)malloc(sizeof(binode));
	b->rchild->rchild = (bitree)malloc(sizeof(binode));
	b->rchild->lchild->a = 65;
	b->rchild->rchild->a = 103;
	b->rchild->rchild->lchild = (bitree)malloc(sizeof(binode));
	b->rchild->rchild->lchild->a = 92;
	b->lchild->lchild->lchild = NULL;
	b->lchild->lchild->rchild = NULL;
	b->lchild->rchild->lchild->lchild = NULL;
	b->lchild->rchild->lchild->rchild = NULL;
	b->lchild->rchild->rchild->rchild = NULL;
	b->lchild->rchild->rchild->lchild = NULL;
	b->rchild->lchild->lchild = NULL;
	b->rchild->lchild->rchild = NULL;
	b->rchild->rchild->lchild->lchild = NULL;
	b->rchild->rchild->lchild->rchild = NULL;
	b->rchild->rchild->rchild = NULL;
}

//ËÑË÷¶þ²æÊ÷
int search_bitree(bitree b, int c)
{
	while (b)
	{
		if (b->a == c)
			return c;
		else if (b->a < c)
			b = b->rchild;
		else
			b = b->lchild;
	}
	return -1;
}

//ËÑË÷µÝ¹é¶þ²æÊ÷
bitree search1_bitree(bitree b, int c)
{
	if (!b || b->a == c)
		return b;
	else if (b->a < c)
		search1_bitree(b->rchild,c);
	else
		search1_bitree(b->lchild,c);
}