#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{

	return 0;
}

//struct S
//{
//	int n;
//	int* ps;
//};
//
//int main()
//{
//	struct S s;
//	int i = 0;
//	s.ps = (int*)malloc(5 * sizeof(int));
//	if (s.ps == NULL)
//	{
//		return 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		s.ps[i] = i;
//	}
//	int* ptr = (int*)realloc(s.ps, 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		s.ps = ptr;
//		ptr = NULL;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		s.ps[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s.ps[i]);
//	}
//	free(s.ps);
//	return 0;
//}

//struct S
//{
//	int s;
//	int arr[];
//};
//
//int main()
//{
//	struct S* ptr = malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ptr->arr[i] = i;
//	}
//	struct S* pptr = realloc(ptr, sizeof(struct S) + 10 * sizeof(int));
//	if (pptr != NULL)
//	{
//		ptr = pptr;
//		pptr = NULL;
//	}
//	else
//	{
//		return 0;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ptr->arr[i] = i;
//	}
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", ptr->arr[i]);
//	}
//	free(ptr);
//	return 0;
//}

//int main()
//{
//	printf("s");
//	return 0;
//}