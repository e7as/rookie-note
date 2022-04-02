#define _CRT_SECURE_NO_WARNINGS 1
#include"line.h"

static void kuorong(list** op)
{
	pol* ret = NULL;
	if ((*op)->size >= (*op)->width)
	{
		ret = realloc((*op)->ppol, sizeof(pol)* 2);
		if (ret == NULL)
		{
			perror("add_list error:");
			return;
		}
		(*op)->ppol = ret;
		ret = NULL;
		(*op)->width += 2;
		printf("增加成功\n");
	}
}

void ini_list(list* op)
{
    op->ppol = (pol*)malloc(NIN*sizeof(pol));
	if (op->ppol == NULL)
	{
		perror("ini_list:");
		return;
	}
	memset(op->ppol, 0,NIN*sizeof(pol));
	op->size = 0;
	op->width = NIN;
}

void des_list(list* op)
{
	free(op->ppol);
}

void clear_list(list* op)
{
	if (op->size)
	{
		memset(op->ppol, 0, sizeof(pol)* 10);
		op->size = 0;
	}
}

int emp_list(const list* op)
{
	if (op->size)
	{
		return 1;
	}
	return 0;
}

int length_list(const list* op)
{
	return op->size;
}

pol* getelme(const list* op, int i)
{
	return &(op->ppol[i]);
}

//int locateelem(const list* op, int e, int(*compared)(pol x, int y))
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < op->size; i++)
//	{
//		if (ret = compare(op->ppol[i], i))
//		{
//			return i;
//		}
//	}
//	return 0;
//}

void add_list(list* op)
{
	kuorong(&op);
	scanf("%f %d", &op->ppol[op->size].a, &op->ppol[op->size].b);
	op->size++;
}

void show_list(list* op)
{
	int i = 0;
	printf("%-5s%-5s\n", "系数", "次方数");
	for (i = 0; i < op->size; i++)
	{
		printf("%-10f%-5d\n", op->ppol[i].a, op->ppol[i].b);
	}
}

void addition_list(list* op, list*np, list* cp)
{
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; i < op->size || j < np->size;)
	{
		if (i < op->size && j < np->size)
		{
			if (op->ppol[i].b == np->ppol[j].b)
			{
				kuorong(&cp);
				cp->ppol[cp->size].a = op->ppol[i].a + np->ppol[j].a;
				cp->ppol[cp->size].b = op->ppol[i].b;
				cp->size++;
				i++;
				j++;
			}
			else if (op->ppol[i].b > np->ppol[j].b)
			{
				kuorong(&cp);
				cp->ppol[cp->size].a = np->ppol[j].a;
				cp->ppol[cp->size].b = np->ppol[j].b;
				cp->size++;
				j++;
			}
			else
			{
				kuorong(&cp);
				cp->ppol[cp->size].a = op->ppol[i].a;
				cp->ppol[cp->size].b = op->ppol[i].b;
				cp->size++;
				i++;
			}
		}
		else if (i >= op->size)
		{
			kuorong(&cp);
			cp->ppol[cp->size].a = np->ppol[j].a;
			cp->ppol[cp->size].b = np->ppol[j].b;
			cp->size++;
			j++;
		}
		else
		{
			kuorong(&cp);
			cp->ppol[cp->size].a = op->ppol[i].a;
			cp->ppol[cp->size].b = op->ppol[i].b;
			cp->size++;
			i++;
		}
	}
}