#define _CRT_SECURE_NO_WARNINGS 1
#include"func.h"

//int main()
//{
//	sstring ch = { { "abcdefg" }, { 7 } };
//	sstring ch1 = { { "cd" }, { 2 } };
//	int c = search_string(&ch, &ch1);
//	printf("%d\n", c);
//	return 0;
//}

//kmp
int main()
{
	sstring ch = { { "cdddcccdccdc" }, { 12 } };
	sstring ch1 = { { "cdcd" }, { 4 } };
	int* a = NULL;
	a = (int*)malloc(sizeof(int)*ch1.length);
	int c = kmp_string(&ch, &ch1,a);
	printf("%d\n", c);
	return 0;
}