#define _CRT_SECURE_NO_WARNINGS 1
#include"line.h"

void ini_list(list* op)
{
    op->ppol = (pol*)malloc(NIN*sizeof(pol));
	if (op->ppol == NULL)
	{
		perror("ini_list:");
		return;
	}
	memset(op->ppol, 0,NIN);
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
	if (op->size >= (sizeof(op->ppol) / sizeof(pol)));
	{
		op->ppol = realloc(op->ppol, sizeof(pol)* 2);
		printf("增加成功\n");
	}
	scanf("&f &d", &op->ppol->a, &op->ppol->b);
	op->size++;
}

void show_list(list* op)
{
	int i = 0;
	for (i = 0; i < op->size; i++)
	{
		printf("%-5f %-5s\n", op->ppol[i].a, op->ppol[i].b);
	}
}