#ifndef __TUSH__
#define __TUSH__
#define MAXSIZE 255
#define MAXLENGTH 80
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//顺序串
typedef struct string
{
	char ch[MAXSIZE+1];
	int length;
}sstring;

//查询子串位置
int search_string(sstring* ch, sstring* ch1);

//链串
typedef struct linklist
{
	char ch[MAXLENGTH];
	struct linklist* next;
}lnode;

typedef struct xiuxiu
{
	lnode* head;
	lnode* tail;
	int size;
}linklist;

//kmp算法
int kmp_string(sstring* ch, sstring* ch1,int* a);

//获取next【i】
void getnext(sstring* ch1, int* cc);

//数组

#endif