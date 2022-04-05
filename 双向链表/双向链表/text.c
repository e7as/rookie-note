#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

int main()
{
	linklist p = NULL;
	data ss[2] = { { 1, 2 }, { 2, 3 } };
	p=ini_linklist(p);
	insert(p, 1,ss[0]);
	insert(p, 2, ss[1]);
	delete_linklist(p, 2);
	printf("%-5d%-5d", p->next->c.a, p->next->c.b);
	return 0;
}