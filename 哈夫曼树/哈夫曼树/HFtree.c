#define _CRT_SECURE_NO_WARNINGS 1
#include"HFtree.h"

//初始化判断数组
static void ini_jug(char zz[MAXSIZE/2])
{
	int i = 0;
	for (i = 0; i < MAXSIZE/2 ; i++)
	{
		if (i < MAXSIZE/2-1)
			zz[i] = '2';
		else
			zz[i] = '\0';
	}
}

//找根权重的最小值和次小值
static void select(hftree* h, int j, hftree* min, hftree* smin)
{
	hftree zz = NULL;
	int i = 0;
	int a = -1;
	int k = 0;
	for (k = 0 ; k < 2; k++)//找权重最小值和次小值的根
	{
		for (i = 1; i <=j; i++)
		{
			if (((*h) + i)->parent != 0)//如果此根有双亲节点，则跳过此根
			{
				continue;
			}
			if (a == -1 && (*h) + i != *min)//如果是第一个根且与最小值的根的地址不同，就把根的权重赋值给a,并记录此根的地址
			{
				a = ((*h) + i)->weight;
				zz = (*h) + i;
			}
			else
			{
				if (a > (((*h) + i)->weight) && (*h) + i != *min)//否则，如果此根的权重小于a且与最小值的根的地址不同，则把此根权重赋予a，并记录此根的地址
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

//初始化哈夫曼树
static void ini_hftree(hftree* cc)
{
	int j = 0;
	for (j = 1; j <= MAXSIZE; j++)//初始化哈夫曼树，初始值设为0。
	{
		(*cc + j)->lchild = 0;
		(*cc + j)->parent = 0;
		(*cc + j)->rchild = 0;
		(*cc + j)->weight = 0;
	}
}

//创建哈夫曼树
void createhftree(hftree* h)
{
	hftree min = NULL;
	hftree smin = NULL;
	int i = 0;
	int gg = 0;
	int n = MAXSIZE / 2;//初始根数量
	*h = (hftree)malloc(sizeof(htnode)*MAXSIZE);//创建一个哈夫曼树数组。
	ini_hftree(h);//初始化哈夫曼树
	for (i = 1; i <= n; i++)
	{
		gg=scanf("%d", &(*(h)+i)->weight);//给初始根加上权重。
	}
	for (i = n+1; i <MAXSIZE; i++)//补全哈夫曼树,运行n-1次（n为初始森林数目）
	{
		select(h, i-1, &min, &smin);//找权重的最小值和次小值
		((*h) + i)->weight = min->weight + smin->weight;//节点权重为次小值和最小值的和
		((*h) + i)->lchild = min-(*h) ;//左孩子为最小值的数组索引数
		((*h) + i)->rchild = smin-(*h);//右孩子为次小值的数组索引数
		min->parent =  i;//左孩子的双亲为此节点
		smin->parent = i;//右孩子的双亲为此节点
	}

}

//获得哈夫曼编码
void geth_fcode(hftree h, hfcode* hf)
{
	hftree k = NULL;
	int tt = 0;
	int j = 0;
	int i = 0;
	*hf =(hfcode)malloc(sizeof(hfnode)*(MAXSIZE/2));
	char zz[MAXSIZE/2];
	for (i = 1; i <= MAXSIZE/2; i++)//找每个叶子节点的哈夫曼编码
	{
		ini_jug(zz);//初始化判断数组,判断数组最后一位存'\0'，其他存2
		j = strlen(zz);//判断数组倒排序
		k = &h[i];
		tt = i;
		while (k->parent != 0)//直到判断到根节点结束
		{
			if (k->parent != 0)//如果不是根节点，就找此节点的双亲节点
			{
				k =&h[k->parent];
				if (tt == k->lchild)//如果此节点是其双亲节点的左孩子，记录0，如果是右孩子记录1
				{
					zz[--j] = '0';
				}
				else
				{
					zz[--j] = '1';
				}
				tt = k - h;
			}
		}
		strcpy(((*hf)+i-1)->hafcode, zz);//将判断数组的值拷贝给哈夫曼代码数组
	}
}

//输出哈夫曼编码
void input_hfcode(hfcode hf)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < MAXSIZE/2; i++)
	{
		for (j = 0; j < MAXSIZE/2-1; j++)
		{
			if ((hf+i)->hafcode[j] != '2')
				printf("%c", (hf+i)->hafcode[j]);
		}
		printf("\n");
	}
}
