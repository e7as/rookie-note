#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int a;
	struct tree* lchild;
	struct tree* rchild;
}binode, * bitree;

//³õÊ¼»¯¶ş²æÊ÷
void ini_bitree(bitree b);

//ËÑË÷¶ş²æÊ÷
int search_bitree(bitree b,int c);

//ËÑË÷µİ¹é¶ş²æÊ÷
bitree search1_bitree(bitree b, int c);

//¶ş²æÅÅĞòÊ÷²åÈë½Úµã
void insert_bitree(bitree b, int c);

//¶ş²æÅÅĞòÊ÷É¾³ı½Úµã
void delete_bitree(bitree b, int c);
