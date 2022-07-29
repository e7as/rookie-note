#include"sort.h"

//初始化数组
void ini_sort(Sqlist* s)
{
	s->r[0].Key = -1;
	s->r[1].Key = 15;
	s->r[2].Key = 8;
	s->r[3].Key = 9;
	s->r[4].Key = 13;
	s->r[5].Key = 1;
	s->r[6].Key = 10;
	s->r[7].Key = 7;
	s->r[8].Key = 11;
	s->length = 8;
}

//插入排序
void insert_sort(Sqlist* s)
{
	int i = 2;
	int j = 1;
	while (i <= s->length)
	{
		if (s->r[i].Key < s->r[i - 1].Key)
		{
			s->r[0].Key = s->r[i].Key;
			for (j = i - 1; s->r[j].Key > s->r[0].Key; j--)
			{
				s->r[j + 1].Key = s->r[j].Key;
			}
			s->r[j + 1].Key = s->r[0].Key;
		}
		i++;
	}
}

//输出数组
void output_sort(Sqlist* s)
{
	int i = 1;
	for (i = 1; i <= s->length ; i++)
		printf("%d ", s->r[i].Key);
}

//二分插入排序
void di_inset_sort(Sqlist* a)
{
	int mid = 0;
	int left = 0;
	int right = 0;
	int i = 2;
	int j = 0;
	while (i <= a->length)
	{
		left = 1;
		right = i - 1;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (a->r[mid].Key < a->r[i].Key)
			{
				left = mid + 1;
				mid= (left + right) / 2;
			}
			if (a->r[mid].Key > a->r[i].Key)
			{
				right = mid - 1;
				mid = (left + right) / 2;
			}
		}
		a->r[0].Key = a->r[i].Key;
		for (j = i - 1; j > mid; j--)
		{
			a->r[j + 1].Key = a->r[j].Key;
		}
		a->r[mid + 1].Key = a->r[0].Key;
		i++;
	}
}

//希尔插入
void shell_sert(Sqlist* s, int t)
{
	int i = 0;
	int j = 0;
	for (i = t + 1; i <= s->length; i++)
	{
		if (s->r[i].Key < s->r[i - t].Key)
		{
			s->r[0].Key = s->r[i].Key;
			for (j = i - t; j > 0 && s->r[0].Key < s->r[j].Key; j = j - t)
			{
				s->r[j + t].Key = s->r[j].Key;
			}
			s->r[j + t].Key = s->r[0].Key;
		}
	}
}


//希尔排序
void shell_sort(Sqlist* s,int dlat[],int t)
{
	int i = 0;
	for (i = 0; i < t; i++)
	{
		shell_sert(s, dlat[i]);
	}
}

//冒泡排序
void pop_sort(Sqlist* s)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < s->length; i++)
	{
		for (j = 1; j <= s->length - i; j++)
		{
			if (s->r[j].Key > s->r[j + 1].Key)
			{
				s->r[0].Key = s->r[j].Key;
				s->r[j].Key = s->r[j + 1].Key;
				s->r[j + 1].Key = s->r[0].Key;
			}
		}
	}
}