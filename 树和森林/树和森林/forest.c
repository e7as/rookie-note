#define _CRT_SECURE_NO_WARNINGS 1
#include"forest.h"

//´´½¨Ê÷
void createforest(flink* f)
{
	*f = (flink)malloc(sizeof(fnode));
	(*f)->a = 1;
	(*f)->fchild = (flink)malloc(sizeof(fnode));
	(*f)->bro = NULL;
	(*f)->fchild->bro = (flink)malloc(sizeof(fnode));
	(*f)->fchild->fchild = (flink)malloc(sizeof(fnode));
}