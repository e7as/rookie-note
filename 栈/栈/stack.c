#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

//³õÊ¼»¯Ë³ĞòÕ»
void ini_stack(stack* l)
{
	l->base = (int*)malloc(sizeof(int)*MAX_SIZE);
	if (!l->base)
	{
		perror("ini_stack error:");
	}
	l->top = l->base;
	l->stacksize = MAX_SIZE;
}

//ÅĞ¶ÏË³ĞòÕ»ÊÇ·ñÎª¿Õ,0Îª¿Õ£¬1²»Îª¿Õ
int emp_stack(const stack* l)
{
	if (l->base == l->top)
		return 0;
	return 1;
}

//ÇóË³ĞòÕ»µÄ³¤¶È
int length_stack(const stack* l)
{
	return l->top - l->base;
}

//Çå¿ÕË³ĞòÕ»
void clear_stack(stack* l)
{
	l->top = l->base;
}

//Ïú»ÙË³ĞòÕ»
void des_stack(stack* l)
{
	free(l->base);
	l->top = NULL;
	l->base = NULL;
	l->stacksize = 0;
}

//Ë³Ğò±íµÄÈëÕ»
int push1(stack* l, int a)
{
	if (l->top - l->base <= l->stacksize)
	{
		*l->top++ = a;
		return 1;
	}
	else
	{
		return 0;
	}
}

//Ë³Ğò±íµÄ³öÕ»
void pop1(stack* l,int* a)
{
	if (l->top == l->base)
		return ;
	*a = *(--l->top);
}

//³õÊ¼»¯Á´Õ»
linklist ini_linklist1(linklist l)
{
	l = (linklist)malloc(sizeof(lnode));
	l->next = NULL;
	return l;
}

//ÅĞ¶ÏÁ´Õ»ÊÇ·ñÎª¿Õ,0Îª¿Õ£¬1Îª·Ç¿Õ
int emp_linklist(linklist l)
{
	if (!l->next)
		return 0;
	return 1;
}

//ÇóÁ´Õ»µÄ³¤¶È
int lengthe_linklist(linklist l)
{
	int count = 0;
	while (l = l->next)
	{
		count++;
	}
	return count;
}

//Çå¿ÕÁ´Õ»
void clear_linklist(linklist l)
{
	linklist q = l->next;
	linklist p =q;
	l->next = NULL;
	l->b = 0;
	while (p)
	{
		q = q->next;
		free(p);
		p = q;
	}
}

//Ïú»ÙÁ´Õ»
void des_linklist(linklist* l)
{
	linklist p = *l;
	while (*l)
	{
		(*l) = (*l)->next;
		free(p);
		p = *l;
	}
}

//Á´Õ»µÄÈëÕ»
linklist pull_linklist(linklist l, int a)
{
	linklist p = NULL;
	p = ini_linklist1(p);
	p->b = a;
	p->next = l;
	l = p;
	return l;
}

//Á´Õ»µÄ³öÕ»
int pop_linklist(linklist* l)
{
	int c = 0;
	if (!(*l)->next)
		return -1;
	linklist p = *l;
	*l = p->next;
	c = p->b;
	free(p);
	return c;
}

