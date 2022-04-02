#define _CRT_SECURE_NO_WARNINGS 1
#include"line.h"

enum option
{
	exit1,
	add,
	addition1,
	add2,
	show,
	show2,
	show3
};

void test()
{
	printf("*********************\n");
	printf("**1.add  2.addition**\n");
	printf("**3.add1 0.exit******\n");
	printf("**4.show 5.show2*****\n");
	printf("**6.show3 ***********\n");
}

int main()
{
	int input = 1;
	list op;
	list np;
	list cp;
	ini_list(&op);
	ini_list(&np);
	ini_list(&cp);
	while (input)
	{
		test();
		printf("«Î—°‘Ò->:");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			add_list(&op);
			break;
		case addition1:
			addition_list(&op, &np,&cp);
			break;
		case add2:
			add_list(&np);
			break;
		case exit1:
			break;
		case show:
			show_list(&op);
			break;
		case show2:
			show_list(&np);
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ£¨«Î÷ÿ ‘");
			break;
		case show3:
			show_list(&cp);
			break;
		}
	}
	return 0;
}