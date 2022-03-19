#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"func.h"
#include<stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void*e1, const void*e2)
{
	if (*(float*)e1 - *(float*)e2 > 0.0)
		return 1;
	if (*(float*)e1 - *(float*)e2 < 0.0)
		return -1;
	if (*(float*)e1 == *(float*)e2)
		return 0;
}

struct stu
{
	char name[10];
	int age;
};

void print_int(int* arr, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void print_float(float*arr, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		printf("%f ", *(arr + i));
	}
}

int cmp_stu_s(const void* e1, const void*e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int main()
{
	struct stu s[3] = { { "lsq", 15 }, { "zhx", 13 }, { "lxd", 18 } };
	int sz = sizeof(s) / sizeof(s[0]);
	//int arr_int[] = { 1, 2, 3, 15, 12, 18, 6, 11 };
	//float arr_float[] = { 8.0, 2.0, 10.0, 7.0, 5.0, 6.0 };
	//int sz = sizeof(arr_int) / sizeof(arr_int[0]);
	//int sz_float = sizeof(arr_float) / sizeof(arr_float[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//qsort(arr_float, sz_float, sizeof(arr_float[0]), cmp_float);
	//print_float(arr_float,sz_float);
	qsort(s, sz, s->age, cmp_stu_s);
	return 0;
}

//void bubble_sort(int arr[10])
//{
//	int i = 0;
//	int j = 0;
//	int mid = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//			}
//		}
//	}
//}
//
//void print1(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = {6, 2, 30, 17, 5, 6, 15, 8, 9, 10 };
//	bubble_sort(arr);
//	print1(arr);
//	return 0;
//}

//int* arr[]
//int(*arr)[]
//int(*arr[])[5];
//
//void print1(int(*arr)[5])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*arr[])[5])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*arr[i] + j));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
	//int arr1[5] = { 1, 2, 3, 4, 5 };
	//int arr2[5] = { 2, 3, 4, 5, 6 };
	//int arr3[5] = { 3, 4, 5, 6, 7 };
	//int(*arr[])[5] = { &arr1, &arr2, &arr3 };
	//print2(&arr);
//	int arr[][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr);
//	return 0;
//}

//int(*(*arr)[])(int ,int)

//void menu()
//{
//	printf("**************************\n");
//	printf("***1.Add         2.Sub****\n");
//	printf("***3.Mul         4.Div****\n");
//	printf("********  0.exit  ********\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input;
//	int(*parr[])(int x, int y) = { 0, Add, Sub, Mul, Div };
//	int output;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		getchar();
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			getchar();
//			output = parr[input](x, y);
//			printf("%d\n", output);
//		}
//		else if (input == 0)
//		{
//			printf("退出成功\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int(*arr[4])(int, int) = { add, sub, mul, div };
//	return 0;
//}
//
//char*(*pf)(char*, char*);
//char*(*pfarr[4])(char*, char*)