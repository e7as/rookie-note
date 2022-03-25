#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("*******************************\n");
	printf("**** 1.add          2.del *****\n");
	printf("**** 3.serch    4.modify *****\n");
	printf("**** 5.show        6.sort *****\n");
	printf("**** 0.exit               *****\n");
	printf("*******************************\n");
}

int main()
{
	int input=0;
	struct pp s;
	INIT(&s);
	do
	{
		menu();
		printf("请选择->: ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add(&s);
			break;
		case DEL:
			del(&s);
			break;
		case SERCH:
			serch(&s);
			break;
		case MODIFY:
			modify(&s);
			break;
		case SHOW:
			show(&s);
			break;
		case SORT:
			qsort(s.con,s.size,sizeof(s.con[0]),sort_by_name);
			printf("排序成功\n");
			break;
		case EXIT:
			printf("退出成功\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}