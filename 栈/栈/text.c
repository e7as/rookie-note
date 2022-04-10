#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

int main()
{
	int a = 13;
	int b = 0;
	//stack cc;
	//ini_stack(&cc);
	//push1(&cc, a);
	//pop1(&cc, &b);
	printf("%d\n", b);

	linklist l = NULL;
	l = ini_linklist;
	pull_linklist(&l, a);
	b=pop_linklist(&l);
	printf("%d\n", b);
}
