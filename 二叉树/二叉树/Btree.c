#define _CRT_SECURE_NO_WARNINGS 1
#include"Btree.h"
//��ʼ������
void ini_queue(queue* p)
{
	p->l = (Bitree*)malloc(sizeof(Bitree)*MAXQSIZE);
	p->front = 0;
	p->rear = 0;
}

//���г���
int length_queue(queue* p)
{
	return (p->rear + MAXQSIZE - p->front) % MAXQSIZE;
}

//����㷨
void enqueue(queue* p, Bitree a)
{
	if ((p->rear + 1) % MAXQSIZE == p->front)
		return;
	p->l[p->rear] = a;
	p->rear = (p->rear + 1) % MAXQSIZE;
}

//�����㷨
Bitree dequeue(queue* p)
{
	Bitree a = NULL;
	if (p->front == p->rear)
		return NULL;
	a = p->l[p->front];
	p->front = (p->front + 1) % MAXQSIZE;
	return a;
}

//��ʼ��˳��ջ
void ini_stack(stack* l)
{
	l->base = (Bitree*)malloc(sizeof(Bitree)*MAX_SIZE);
	if (!l->base)
	{
		perror("ini_stack error:");
	}
	l->top = l->base;
	l->stacksize = MAX_SIZE;
}

//�ж�˳��ջ�Ƿ�Ϊ��,0Ϊ�գ�1��Ϊ��
int emp_stack(const stack* l)
{
	if (l->base == l->top)
		return 0;
	return 1;
}

//��˳��ջ�ĳ���
int length_stack(const stack* l)
{
	return l->top - l->base;
}

//���˳��ջ
void clear_stack(stack* l)
{
	l->top = l->base;
}

//����˳��ջ
void des_stack(stack* l)
{
	free(l->base);
	l->top = NULL;
	l->base = NULL;
	l->stacksize = 0;
}

//˳������ջ
int push1(stack* l, Bitree a)
{
	if (l->top - l->base <= l->stacksize)
	{
		*(l->top++) = a;
		return 1;
	}
	else
	{
		return 0;
	}
}

//˳���ĳ�ջ
void pop1(stack* l, Bitree* a)
{
	if (l->top == l->base)
		return;
	*a = *(--l->top);
}

void CreateBitree(Bitree* b)
{
	*b = (Bitree)malloc(sizeof(Binode));
	(*b)->a = 1;
	(*b)->lchild = (Bitree)malloc(sizeof(Binode));
	(*b)->rchild = (Bitree)malloc(sizeof(Binode));
	(*b)->lchild->a = 5;
	(*b)->rchild->a = 6;
	(*b)->lchild->lchild = NULL;
	(*b)->lchild->rchild = (Bitree)malloc(sizeof(Binode));
	(*b)->lchild->rchild->a =7 ;
	(*b)->lchild->rchild->lchild=NULL;
	(*b)->lchild->rchild->rchild = NULL;
	(*b)->rchild->lchild = (Bitree)malloc(sizeof(Binode));
	(*b)->rchild->rchild = (Bitree)malloc(sizeof(Binode));
	(*b)->rchild->lchild->a = 11;
	(*b)->rchild->rchild->a = 13;
	(*b)->rchild->lchild->lchild = (Bitree)malloc(sizeof(Binode));
	(*b)->rchild->lchild->lchild->a = 15;
	(*b)->rchild->lchild->lchild->lchild = NULL;
	(*b)->rchild->lchild->lchild->rchild = NULL;
	(*b)->rchild->lchild->rchild = NULL;
	(*b)->rchild->rchild->lchild = NULL;
	(*b)->rchild->rchild->rchild = NULL;
}

//��ȡ�ڵ��ֵ
void getvisit(Bitree b)
{
	printf("%d ", b->a);
}

//����ݹ����������
void PreOrderTraverse(Bitree b)
{
	if (!b)
		return;
	else
	{
		getvisit(b);
		PreOrderTraverse(b->lchild);
		PreOrderTraverse(b->rchild);
	}
}

//����ݹ����������
void INOrderTraverse(Bitree b)
{
	if (b== NULL)
	{
		return;
	}
	else
	{
		INOrderTraverse(b->lchild);
		getvisit(b);
		INOrderTraverse(b->rchild);
	}
}

//����ݹ����������
void PostOrderTraverse(Bitree b)
{
	if (!b)
		return;
	else
	{
		PostOrderTraverse(b->lchild);
		PostOrderTraverse(b->rchild);
		getvisit(b);
	}
}

//ǰ��ǵݹ����������
void pretra(Bitree b, stack* dd)
{
	Bitree c = NULL;
	while (b || emp_stack(dd))
	{
		if (b)
		{
			push1(dd, b);
			printf("%d ", b->a);
			b = b->lchild;

		}
		else
		{
			pop1(dd, &c);
			b = c->rchild;
		}
	}
}

//����ǵݹ����������
void inordertra(Bitree b,stack* dd)
{
	Bitree c = NULL;
	while (b || emp_stack(dd))
	{
		if (b)
		{
			push1(dd, b);
			b = b->lchild;
			
		}
		else
		{
			pop1(dd, &c);
			printf("%d ", c->a);
			b = c->rchild;
		}
	}
}

//����ǵݹ����������
void posttra(Bitree b, stack* d)
{

	Bitree e = b;
	Bitree f = NULL;
	Bitree g = NULL;
	while (e || emp_stack(d))
	{
		if (e)
		{
			push1(d, e);
			e = e->lchild;
		}
		else
		{
			e = *(d->top-1);
			if (e->rchild && e->rchild != f)
			{
				e = e->rchild;
			}
			else
			{
				printf("%d ", e->a);
				pop1(d, &f);
				e = NULL;
			}
		}
	}
}

//��α���������
void gratra(Bitree b, queue* d)
{
	Bitree e = NULL;
	if (b)
		enqueue(d, b);
	else
		return ;
	while (length_queue(d))
	{
		e = dequeue(d);
		printf("%d ", e->a);
		if (e->lchild)
		{
			enqueue(d, e->lchild);
		}
		if (e->rchild)
		{
			enqueue(d, e->rchild);
		}
	}
}

//���򴴽�������
void precreatbitree(Bitree* b)
{
	int ch = 0;
	scanf("%d",&ch);
	if (ch == -1)
		*b = NULL;
	else
	{
		(*b) = (Bitree)malloc(sizeof(Binode));
		(*b)->a = ch;
		precreatbitree(&(*b)->lchild);
		precreatbitree(&(*b)->rchild);
	}
	return;
}

//���ƶ�����
void copybitree(Bitree b,Bitree* c)
{
	if (!b)
	{
		*c = (Bitree)malloc(sizeof(Binode));
		*c = b;
		return;
	}
	else
	{
		*c = (Bitree)malloc(sizeof(Binode));
		(*c)->a = b->a;
		copybitree(b->lchild, &(*c)->lchild);
		copybitree(b->rchild, &(*c)->rchild);
	}
}

//�����������
int depthbitree(Bitree b)
{
	int m = 0;
	int n = 0;
	if (b == NULL)
		return 0;
	else
	{
		m=depthbitree(b->lchild);
		n=depthbitree(b->rchild);
		if (m > n)
			return m + 1;
		else
			return n + 1;
	}
}

//�������Ľڵ���
int nodenum(Bitree b)
{
	int m = 0;
	int n = 0;
	if (b == NULL)
		return 0;
	else
	{
		m = nodenum(b->lchild);
		n = nodenum(b->rchild);
		return m + n + 1;
	}
}

//Ҷ�ӽڵ���
int leafnum(Bitree b)
{
	if (b == NULL)
		return 0;
	if (b->lchild==NULL && b->rchild==NULL)
		return 1;
	else return leafnum(b->lchild) + leafnum(b->rchild);
}