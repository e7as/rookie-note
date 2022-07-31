#pragma once
#ifndef __TUSH__
#define __TUSH__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 8

typedef struct
{
	int Key;
}RedType;

typedef struct
{
	RedType r[MAXSIZE + 1];
	int length;
}Sqlist;

//��ʼ������
void ini_sort(Sqlist* s);

//��������
void insert_sort(Sqlist* s);

//���ֲ�������
void di_inset_sort(Sqlist* a);

//ϣ������
void shell_sert(Sqlist* s, int t);

//ϣ������
void shell_sort(Sqlist* s,int dlat[],int t);

//ð������
void pop_sort(Sqlist* s);

//��������
void fast_sort(Sqlist* s,int low ,int high);

//��������������ӱ�
int partition_fast(Sqlist* s, int low, int high);

//��ѡ������
void ez_select_sort(Sqlist* s);



//�������
void output_sort(Sqlist* s);
#endif // !__TUSH__
