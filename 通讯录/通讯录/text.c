#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("*******************************\n");
	printf("**** 1.add          2.del *****\n");
	printf("**** 3. serch    4.modify *****\n");
	printf("**** 5.show        6.sort *****\n");
	printf("**** 0.exit               *****\n");
	printf("*******************************\n");
}

int main()
{
	int input;
	struct pp s;
	INIT(&s);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ->: ");
		scanf("%s", input);
		switch (input)
		{
		case 1:
			//add();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
	} while (input);
	return 0;
}