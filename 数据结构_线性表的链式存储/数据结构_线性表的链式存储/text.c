#define _CRT_SECURE_NO_WARNINGS 1
#include"link_list.h"

int main()
{
	int cc;
	linklist p=NULL;
	p=final_insert(p,3);
	printf("%-5d%-5d%-5s\n", p->next->next->c.a, p->next->next->c.b, p->next->next->c.d);
	clear_linklist(p);
	cc=emp_linklist(p);
	if (cc)
		printf("%-5d%-5d%-5s\n", p->next->next->c.a, p->next->next->c.b, p->next->next->c.d);
	else
		printf("Á´±íÎª¿Õ\n");
	return 0;
}