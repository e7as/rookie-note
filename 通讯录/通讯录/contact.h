#include<stdio.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
struct peoinfo
{
	int name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct pp
{
	struct peoinfo con[MAX];
	int size;
};

void INIT(struct pp* s);