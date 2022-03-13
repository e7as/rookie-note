#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void my_strcpy(char* arr1, char* arr2)
{
	if (strcmp(arr2,'\0')!=0)
	{
		*arr1 = arr2;
		my_strcpy(++arr1, ++arr2);
	}
	else
	{
		*arr1 = *arr2;
	}
}

int main()
{
	char arr1[] = "**********";
	char arr2[] = {'b', 'i', 't','\0'};
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}