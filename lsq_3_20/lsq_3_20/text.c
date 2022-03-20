#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



void my_strcpy(char* e1, const char* e2)
{
	assert(e1 != NULL);
	assert(e2 != NULL);
	while (*e1++ = *e2++)
	{
		;
	}
}

int main()
{
	char ch1[] = "sadqrqfsfa";
	char ch2[] = "abcdef";
	my_strcpy(ch1, ch2);
	printf("%s\n", ch1);
	return 0;
}

//int my_strlen(const char* ch)
//{
//	assert(ch != NULL);
//	if (*ch++!='\0')
//	{
//		return 1 + my_strlen(ch);
//	}
//	else
//		return 0;
//}

//int main()
//{
//	char ch[] = "abcdef";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//}

//int cmp_int(const void*e1, const void*e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//int  cmp_float(const void*e1, const void*e2)
//{
//	if (*(float*)e1 - *(float*)e2 > 0.0)
//		return 1;
//	else if (*(float*)e1 - *(float*)e2 < 0.0)
//		return -1;
//	else if (*(float*)e1 == *(float*)e2)
//		return 0;
//}
//
//int cmp_char(const void*e1, const void*e2)
//{
//	return  strcmp((char*)e1, (char*)e2);
//}
//
//void swap(char* e1, char* e2,int width)
//{
//	int i = 0;
//	int mid = 0;
//	for (i = 0; i < width; i++)
//	{
//		mid = *e1;
//		*e1++ = *e2;
//		*e2++ = mid;
//	}
//}
//
//void qqsort(void* arr, int x, int y, int(*func)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	char mid = 0;
//	for (i = 0; i < x - 1; i++)
//	{
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (func((char*)arr + y*j, (char*)arr + y*(j + 1)) > 0 )
//			{
//				swap((char*)arr + y*j, (char*)arr + y*(j + 1), y);
//			}
//		}
//	}
//}
//
//struct stu
//{
//	char name[5];
//	int age;
//};
//
//int cmp_stu_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int main()
//{
//	struct stu s[] = { { "lsq", 15 }, { "zhx", 18 }, { "wdw", 16 } };
//	//float arr[] = { 5.0, 3.0, 4.0, 8.0, 6.0, 7.0 };
//	//char ch[] = "abcdfe";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int sz = strlen(ch);*/
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qqsort(s, sz, sizeof(s[0]), cmp_stu_name);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", s->age);
//	//}
//	return 0;
//}