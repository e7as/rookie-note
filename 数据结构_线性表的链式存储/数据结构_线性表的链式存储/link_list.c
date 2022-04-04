#define _CRT_SECURE_NO_WARNINGS 1
#include"link_list.h"

//��ʼ������
static linklist ini_linklist(linklist l)
{
	l = (linklist)malloc(sizeof(lnode));
	l->next = NULL;
	return l;
}

//�ж������Ƿ�Ϊ���ǵĻ�����0�����ǵĻ�����1
int emp_linklist(linklist l)
{
	if (l->next)
		return 1;
	return 0;
}

//��������
void des_linklist(linklist* l)
{
	assert(1);
	linklist p =*l;
	do
	{
		*l = (*l)->next;
		free(p);
	} while(p=*l);
	*l = NULL;
}

//�������
void clear_linklist(linklist l)
{
	linklist p = l;
	p = l->next;
	l->next = NULL;
	l = p;
	while (l)
	{
		l = l->next;
		free(p);
		p = l;
	}
}

//������
int length_linklist(linklist l)
{
	int count = 0;
	while (l->next)
	{
		l = l->next;
		count++;
	}
	return count;
}

//���ҵ�i��Ԫ��
data* search_linklist(linklist l, int i)
{
	int j = 1;
	l=l->next;
	if (i < j)
		return NULL;
	//�������е�i������
	while (l)
	{
		if (j == i)
		{
			return &(l->c);
		}
		l = l->next;
		j++;
	}
	//i�������������ݵĸ���
	return NULL;
}

//��ֵ����
int search_by_value(linklist l, int i)
{
	int count = 1;
	l=l->next;
	while (l)
	{
		if (l->c.a == i)
			return count;
		l = l->next;
		count++;
	}
	return 0;
}

//����,�ɹ�����1��ʧ�ܷ���0
int insert(linklist l, int i,data cc)
{
	linklist p = NULL;
	int j = 1;
	while (l)
	{
		if (i = j)
		{
			p = (linklist)malloc(sizeof(lnode));
			p->c.a = cc.a;
			p->c.b = cc.b;
			strcpy(p->c.d ,cc.d);
			p->next = l->next;
			l->next = p;
			return 1;
		}
		l=l->next;
		j++;
	}
	return 0;
}

//ɾ�����ɹ�����1��ʧ�ܷ���0
int delete(linklist l, int i)
{
	linklist p=NULL;
	p = l->next;
	int j = 1;
	if (i < 1)
		return 0;
	while (l)
	{
		if (i == j)
		{
			l->next = p->next;
			free(p);
			return 1;
		}
		l = p;
		p=p->next;
		j++;
	}
	return 0;
}

//ͷ�巨
linklist head_inset(linklist l, int n)
{
	linklist p=NULL;
	l = (linklist)malloc(sizeof(lnode));
	l->next = NULL;
	while (n--)
	{
		p = (linklist)malloc(sizeof(lnode));
		p->next = NULL;
		p->next = l->next;
		printf("������a��ֵ->:");
		scanf("%d", &p->c.a);
		printf("������b��ֵ->:");
		scanf("%d", &p->c.b);
		printf("������d��ֵ->:");
		scanf("%s", &p->c.d);
		l->next = p;
	}
	return l;
}

//β�巨
linklist final_insert(linklist l, int n)
{
	int i = 0;
	linklist p = NULL;
	l = ini_linklist(l);
	linklist d = l;
	int j = 1;
	while (n--)
	{
		p = ini_linklist(p);
		printf("������%d��Ԫ��->:",j);
		printf("������a��ֵ->:");
		scanf("%d", &p->c.a);
		printf("������b��ֵ->:");
		scanf("%d", &p->c.b);
		printf("������d��ֵ->:");
		scanf("%s", &p->c.d);
		d->next = p;
		d = d->next;
		j++;
	}
	return l;
}