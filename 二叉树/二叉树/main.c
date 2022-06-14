#define _CRT_SECURE_NO_WARNINGS 1
#include"Btree.h"

int main()
{
	int a = 0;
	Bitree cc = NULL;
	//Bitree dd = NULL;
	//stack dd;
	//queue dd;
	CreateBitree(&cc);
	//ini_queue(&dd);
	//PostOrderTraverse(cc);
	//ini_stack(&dd);
	//pretra(cc,&dd);
	//inordertra(cc, &dd);
	//posttra(cc, &dd);
	//gratra(cc, &dd);
	//increatbitree(&cc);
	//INOrderTraverse(cc);
	//copybitree(cc, &dd);
	//PreOrderTraverse(cc);
	//a = depthbitree(cc);
	a = leafnum(cc);
	printf("%d\n", a);
	return 0;
}

//int main()
//{
//	int i = 0;
//	char str[] = { "ab cd" };
//	printf("%d\n", sizeof(str));
//	printf("%d\n", strlen(str));
//	return 0;
//}