#define _CRT_SECURE_NO_WARNINGS 1
#include"link_list.h"

int main()
{
	int cc;
	linklist p=NULL;
	p=final_insert(p,3);
	printf("%-5d%-5d%-5s\n", p->next->next->c.a, p->next->next->c.b, p->next->next->c.d);
	cc=delete(p, 1);
	if (cc)
		printf("%-5d%-5d%-5s\n", p->next->next->c.a, p->next->next->c.b, p->next->next->c.d);
	else
		printf("É¾³ıÊ§°Ü\n");
	return 0;
}