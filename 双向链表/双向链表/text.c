#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

int main()
{
	linklist p = NULL;
	linklist z = NULL;
	linklist x = NULL;
	data ss[2] = { { 15, 3 }, { 3, 2 } };
	data gg[2] = { { 2, 3 }, { 18, 1 } };
	p=ini_linklist(p);
	z = ini_linklist(z);
	insert(p, 1,ss[0]);
	insert(p, 2, ss[1]);
	insert(z, 1, gg[0]);
	insert(z, 2, gg[1]);
	qsort_1(p);
	qsort_1(z);
	print1(p);
	printf("----------------------------\n");
	print1(z);
	printf("----------------------------\n");
	x = merge_1(p, z);
	print1(x);
	return 0;
}