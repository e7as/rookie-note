#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

//��ʼ��˫������
 linklist ini_linklist(linklist l)
{
	l = (linklist)malloc(sizeof(lnode));
	l->last = NULL;
	l->next = NULL;
	return l;
}

//�ж��Ƿ�Ϊ��
int emp_linklist(linklist l)
{
	if (l->next)
		return 1;
	return 0;
}

//��������
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

//�������
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

//������
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

//���ҵ�i��Ԫ��
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

//��ֵ����
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

//˫������Ĳ���
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

//˫�������ɾ��
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

//��������
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