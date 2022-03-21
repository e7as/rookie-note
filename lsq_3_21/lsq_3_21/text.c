#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>



//int main()
//{
//	char ch[] = "I AM sYsjadkHJkl";
//	int i = 0;
//	int sz = strlen(ch);
//	for (i = 0; i < sz; i++)
//	{
//		ch[i] = tolower(ch[i]);
//	}
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	char ch[] = "123.465.127@13245" ;
//	const char* e1 = "@.";
//	char* ret = NULL;
//	for (ret = strtok(ch, e1); ret != NULL; ret = strtok(NULL, e1))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//char* my_strstr(const char* ch1,const char* ch2)
//{
//	assert(ch1 !=NULL);
//	assert(ch2 != NULL);
//	char*s1 = (char*)ch1;
//	char*s2 = (char*)ch2;
//	char* mid = (char*)ch1;
//	if (*s2 == '\0')
//	{
//		return (char*)ch1;
//	}
//	while (*mid)
//	{
//		s1 = mid;
//		s2 = (char*)ch2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return mid;
//		}
//		mid++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	 char ch1[] = "abcdefabicdef";
//	 char ch2[] = "i";
//    char* ret = my_strstr(ch1, ch2);
//	if (ret == NULL)
//	{
//		printf("×Ó´®Ã»ÕÒµ½\n");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}

//my_strncmp
//int my_strncmp(const char* ch1,const char* ch2, int x)
//{
//	assert(ch1 && ch2);
//	int count = 0;
//	while (count != 5)
//	{
//		if (*ch1 == ch2)
//			count++;
//		else
//			return *ch1 - *ch2;
//	}
//	return 0;
//}
//
//int main()
//{
//	const char* ch1 = "abcde";
//	const char* ch2 = "abcce";
//	int ret = my_strncmp(ch1, ch2, 3);
//	printf("%d\n", ret);
//	return 0;
//}


//my_strcmp
//int my_strcmp(const char* ch1, const char* ch2)
//{
//	assert(ch1 && ch2);
//	while (*ch1 == *ch2)
//	{
//		if (*ch1 ==0)
//		{
//			return 0;
//		}
//		ch1++;
//		ch2++;
//	}
//	return *ch1 - *ch2;
//}
//
//int main()
//{
//	const char ch1[] = "abca";
//	const char ch2[] = "abc";
//	int value=my_strcmp(ch1, ch2);
//	printf("%d\n", value);
//	return 0;
//}