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

//��ʼ�����Ա�
void ini_list(list* op);

//ɾ����
void des_list(list* op);

//�����
void clear_list(list* op);

//���Ƿ�Ϊ��
int emp_list(const list* op);

//��ĳ���
int length_list(const list* op);

//���ر��е�i������ֵ
pol* getelme(const list* op, int i);

//���ص�һ����e�����ϵcompare������Ԫ�ص�λ��
//int locateelem(list* op, int e, int(*compared)(int x, int y));

//��ǰ��


//����Ԫ��
void add_list(list* op);

//չʾ���Ա�
void show_list(list* op);