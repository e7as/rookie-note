#define _CRT_SECURE_NO_WARNINGS 1
#include"HFtree.h"

//�Ҹ�Ȩ�ص���Сֵ�ʹ�Сֵ
static void select(hftree* h, int j, hftree* min, hftree* smin)
{
	hftree zz = NULL;
	int i = 0;
	int a = -1;
	int k = 0;
	for (k = 0 ; k < 2; k++)//��Ȩ����Сֵ�ʹ�Сֵ�ĸ�
	{
		for (i = 1; i <=j; i++)
		{
			if (((*h) + i)->parent != 0)//����˸���˫�׽ڵ㣬�������˸�
			{
				continue;
			}
			if (a == -1 && (*h) + i != *min)//����ǵ�һ����������Сֵ�ĸ��ĵ�ַ��ͬ���ͰѸ���Ȩ�ظ�ֵ��a,����¼�˸��ĵ�ַ
			{
				a = ((*h) + i)->weight;
				zz = (*h) + i;
			}
			else
			{
				if (a > (((*h) + i)->weight) && (*h) + i != *min)//��������˸���Ȩ��С��a������Сֵ�ĸ��ĵ�ַ��ͬ����Ѵ˸�Ȩ�ظ���a������¼�˸��ĵ�ַ
				{
					a = ((*h) + i)->weight;
					zz = (*h) + i;
				}
			}
		}
		if (k == 0)
		{
			*min = zz;
			zz = NULL;
			a = -1;
		}
		else
			*smin = zz;
	}
}

//��ʼ����������
static void ini_hftree(hftree* cc)
{
	int j = 0;
	for (j = 1; j <= MAXSIZE; j++)//��ʼ��������������ʼֵ��Ϊ0��
	{
		(*cc + j)->lchild = 0;
		(*cc + j)->parent = 0;
		(*cc + j)->rchild = 0;
		(*cc + j)->weight = 0;
	}
}

//������������
void createhftree(hftree* h)
{
	hftree min = NULL;
	hftree smin = NULL;
	int i = 0;
	int n = MAXSIZE / 2;//��ʼ������
	*h = (hftree)malloc(sizeof(htnode)*MAXSIZE);//����һ�������������顣
	ini_hftree(h);//��ʼ����������
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &(*(h)+i)->weight);//����ʼ������Ȩ�ء�
	}
	for (i = n+1; i <MAXSIZE; i++)//��ȫ��������,����n-1�Σ�nΪ��ʼɭ����Ŀ��
	{
		select(h, i-1, &min, &smin);//��Ȩ�ص���Сֵ�ʹ�Сֵ
		((*h) + i)->weight = min->weight + smin->weight;//�ڵ�Ȩ��Ϊ��Сֵ����Сֵ�ĺ�
		((*h) + i)->lchild = min-(*h) ;//����Ϊ��Сֵ������������
		((*h) + i)->rchild = smin-(*h);//�Һ���Ϊ��Сֵ������������
		min->parent =  i;//���ӵ�˫��Ϊ�˽ڵ�
		smin->parent = i;//�Һ��ӵ�˫��Ϊ�˽ڵ�
	}

}

