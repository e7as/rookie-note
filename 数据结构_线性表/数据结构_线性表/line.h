#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NIN 15

typedef struct pol
{
	float a;
	int b;
}pol;

typedef struct list
{
    pol* ppol;
	int size;
	int width;
}list;

//初始化线性表
void ini_list(list* op);

//删除表
void des_list(list* op);

//清除表
void clear_list(list* op);

//表是否为空
int emp_list(const list* op);

//表的长度
int length_list(const list* op);

//返回表中第i个数的值
pol* getelme(const list* op, int i);

//返回第一个与e满足关系compare（）的元素的位序
//int locateelem(list* op, int e, int(*compared)(int x, int y));

//找前驱


//增加元素
void add_list(list* op);

//展示线性表
void show_list(list* op);