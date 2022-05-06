#define _CRT_SECURE_NO_WARNINGS 1
#include"func.h"

//查询子串位置
int search_string(sstring* ch, sstring* ch1)
{
	int i = 0;
	int j = 0;
	int c = ch1->length;
	while (i <= ch->length && j < c)
	{
		if (ch->ch[i] == ch1->ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == c)
		return i - j + 1;
	return -1;
}

//kmp算法
int kmp_string(sstring* ch, sstring* ch1,int* a)
{
	int i = 0;
	int j = 0;
	getnext(ch1, a);
	while (j <= ch1->length-1 && i<=ch->length-1)
	{
		if (j==-1 || ch->ch[i] == ch1->ch[j])
		{
			i++;
			j++;
		}
		else
		{
			j = a[j];
		}
	}
	if (j == ch1->length)
	{
		return i - j + 1;
	}
	return -1;
}

//获取next【i】
void getnext(sstring* ch1, int* a)
{
	int k = -1;
	int j = 0;
	a[0] = -1;
	while (j <= ch1->length-1)
	{
		if (k == -1 || ch1->ch[j] == ch1->ch[k])
			a[++j] = ++k;
		else
			k = a[k];
	}
}

//数组