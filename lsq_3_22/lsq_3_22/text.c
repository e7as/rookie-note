#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//typedef struct stu
//{
//	char sn[20];
//	int age;
//	struct stu* next;
//}stu;

int main()
{

	return 0;
}

//void* my_memmove(void* arr1, const void* arr2, int x)
//{
//	assert(arr1 && arr2);
//	int y =x-1;
//	void* ret = arr1;
//	if (arr2 < arr1)
//	{
//		while (y--)
//		{
//			*((char*)arr1 + y) = *((char*)arr2+y);
//		}
//	}
//	else
//	{
//		while (x--)
//		{
//			*(char*)arr1 = *(char*)arr2;
//			++(char*)arr1;
//			++(char*)arr2;
//		}
//	}
//	return ret;
//}

//void* my_memcpy(void* arr, void* arr1,int x)
//{
//	assert(arr && arr1);
//	void* ret = arr1;
//
//	while (x--)
//	{
//		*(char*)arr = *(char*)arr1;
//		++(char*)arr;
//		++(char*)arr1;
//	}
//	return ret;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	void* ret=my_memmove(&arr[3],arr, sizeof(arr[0]) * 5);
//	return 0;
//}

//void my_memcpy(void* arr2, const void* arr1, int x)
//{
//	assert(arr2 && arr1);
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		*((char*)arr2 + i) = *((char*)arr1 + i);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[5] = { 0 };
//	struct stu arr1[] = { { "lsq", 15 }, { "zhx", 18 } };
//	struct stu arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}