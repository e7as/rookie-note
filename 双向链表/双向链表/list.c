#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

//初始化双向链表
 linklist ini_linklist(linklist l)
{
	l = (linklist)malloc(sizeof(lnode));
	l->last = NULL;
	l->next = NULL;
	return l;
}

//判断是否为空
int emp_linklist(linklist l)
{
	if (l->next)
		return 1;
	return 0;
}

//销毁链表
void des_linklist(linklist* l)
{
	linklist p = *l;
	while (p)
	{
		p = p->next;
		free(*l);
		*l = p;
	}
}

//清空链表
void clear_linklist(linklist l)
{
	linklist p = l->next;
	l = p;
	while (l)
	{
		p=p->next;
		free(l);
		l = p;
	}
}

//链表长度
int length_linklist(linklist l)
{
	int count = 0;
	l->next;
	while (l)
	{
		l = l->next;
		count++;
	}
	return count;
}

//查找第i个元素
linklist search(linklist l, int i)
{
	int j = 1;
	linklist p = l;
	if (i < 1)
		return NULL;
	while (p->next && j!=i)
	{
		p=p->next;
		j++;
	}
	if (j == i)
		return p;
	return NULL;
}

//按值查找
int search_value(linklist l, int i)
{
	linklist p = l->next;
	int j = 1;
	while (p->next && p->c.a==i)
	{
		p = p->next;
		j++;
	}
	if (p->c.a == i)
		return j;
	return 0;
}

//双向链表的插入
int insert(linklist l, int i, data cc)
{
	linklist p = l;
	linklist s = NULL;
	if (i < 1)
		return 0;
	if (!(p = search(p, i)))
		return 0;
	s = ini_linklist(s);
	s->c.a = cc.a;
	s->c.b = cc.b;
	if (p->next==NULL)
	{
		s->last = p;
		s->next = p->next;
		p->next = s;
	}
	else
	{
		s->last = p->last;
		s->last = p;
		p->next->last = s;
		p->next = s;
	}
	return 1;
}

//双向链表的删除
int delete_linklist(linklist l, int i)
{
	linklist p = l;
	if (!(p = search(p, i)))
		return 0;
	if (p->next==NULL)
		return 0;
	if (p->next->next)
	{
		p = p->next;
		p->last->next = p->next;
		p->next->last = p->last;
		free(p);
	}
	else
	{
		free(p->next);
		p->next = NULL;
	}
	return 1;
}

//链表排序
void qsort_1(linklist l)
{
	int i = 0;
	linklist p = l->next;
	linklist pp = l->next;
	int count = 1;
	while (pp->next)
	{
		pp=pp->next;
		count++;
	}
	for (i = 0; i < count - 1; i++)
	{
		if (p->c.a > p->next->c.a)
		{
			p->last->next = p->next;
			p->next->last = p->last;
			p->last = p->next;
			p->next = p->next->next;
			p->last->next = p;
		}
		else
			p = p->next;
	}
}

//合并有序链表
linklist merge_1(linklist l, linklist k)
{
	linklist p = NULL;
	linklist pp = NULL;
	linklist gg = NULL;
	pp = l;
	l = l->next;
	k = k->next;
	p = k;
	while (l && k)
	{
		if (p->c.a < l->c.a)
		{
			k = k->next;
			l->last->next = p;
			p->next = l;
			p->last = l->last;
			l->last = p;
			p = k;
		}
		else
			gg = l;
			l = l->next;
	}
	if (k == NULL)
		return pp;
	else
	{
		gg->next = k;
		k->last = gg;
		return pp;
	}
}

//打印链表
void print1(linklist l)
{
	l = l->next;
	while (l)
	{
		printf("%-5d%-5d\n", l->c.a, l->c.b);
		l = l->next;
	}
}