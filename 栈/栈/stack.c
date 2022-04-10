#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

//��ʼ��˳��ջ
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

//˳���ĳ�ջ
void pop1(stack* l,int* a)
{
	if (l->top == l->base)
		return ;
	*a = *(--l->top);
}

//��ʼ����ջ
linklist ini_linklist1(linklist l)
{
	l = (linklist)malloc(sizeof(lnode));
	l->next = NULL;
	return l;
}

//�ж���ջ�Ƿ�Ϊ��,0Ϊ�գ�1Ϊ�ǿ�
int emp_linklist(linklist l)
{
	if (!l->next)
		return 0;
	return 1;
}

//����ջ�ĳ���
int lengthe_linklist(linklist l)
{
	int count = 0;
	while (l = l->next)
	{
		count++;
	}
	return count;
}

//�����ջ
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

//������ջ
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

//��ջ����ջ
linklist pull_linklist(linklist l, int a)
{
	linklist p = NULL;
	p = ini_linklist1(p);
	p->b = a;
	p->next = l;
	l = p;
	return l;
}

//��ջ�ĳ�ջ
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

