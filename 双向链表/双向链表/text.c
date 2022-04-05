#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

int main()
{
	linklist p = NULL;
	data ss[2] = { { 2, 3 }, { 1, 2 } };
	p=ini_linklist(p);
	insert(p, 1,ss[0]);
	insert(p, 2, ss[1]);
	printf("%-5d%-5d\n", p->next->c.a, p->next->c.b);
	qsort_1(p);
	printf("%-5d%-5d\n", p->next->c.a, p->next->c.b);
	printf("%-5d%-5d", p->next->next->c.a, p->next->next->c.b);
	return 0;
}