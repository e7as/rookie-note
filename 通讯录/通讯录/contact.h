#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum option
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SHOW,
	SORT
};

struct peoinfo
{
	char name[MAX_NAME];
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

void INIT(struct pp* ss);
void add(struct pp* ss);
void show(const struct pp* ss);
void del(struct pp* ss);
void serch(const struct pp* ss);
void modify(struct pp* ss);
void sort(struct pp* ss);
int sort_by_name(void* e1,void* e2);