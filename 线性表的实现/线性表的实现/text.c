#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef struct data
//{
//	int a[7];
//	int size;
//}data;
//
//void add(data a1, data a2, data* a3)
//{
//	int i = 0;
//	int j = 0;
//	if (a1.size > a2.size)
//		j = 0;
//	else
//		j = 1;
//	for (i = 0; i<(a1.size>a2.size ? a2.size : a1.size); i++)
//	{
//		a3->a[i]=a1.a[i] + a2.a[i];
//		(*a3).size++;
//	}
//	for (i = i; i < (a1.size < a2.size ? a2.size : a1.size); i++)
//	{
//		if (j)
//		{
//			(*a3).a[i] = a2.a[i];
//			(*a3).size++;
//		}
//		else
//		{
//			(*a3).a[i] = a1.a[i];
//			(*a3).size++;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	data a1 = { { 10, 5, -4, 3, 2 }, { 5 } };
//	data a2 = { { -3, 8, 4, 0, -5, 7, -2 }, { 7 } };
//	data a3 = { { 0 }, { 0 } };
//    add(a1, a2,&a3);
//	for (i = 0; i < a3.size; i++)
//	{
//		printf("%-5d", a3.a[i]);
//	}
//	return 0;
//}


