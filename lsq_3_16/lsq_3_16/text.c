#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

void(*signal(int, void(*)(int)))(int)

//
//(*   (void  (*) () )   0)   ();
//
//int(*p)()
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int(*p)(int, int)=Add;
//	int z=p(2, 3);
//	printf("%d\n", z);
//	return 0;
//}

//void print1(int(*p)[5], int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7,}};
//	print1(&arr,3,5);
//	return 0;
//}

//void print1(int* arr)
//{
//	printf("%d\n", arr[2]);
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	print1(arr);
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	printf("%d\n", arr[1][2]);
//}

//void print2(int*(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",(*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 },{3, 4, 5, 6, 7} };
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

