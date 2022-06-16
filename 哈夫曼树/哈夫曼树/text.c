#define _CRT_SECURE_NO_WARNINGS 1
#include"HFtree.h"

int main()
{
	hftree cc = NULL;
	createhftree(&cc);
	printf("%d\n", (cc+1)->weight);
	return 0;
}