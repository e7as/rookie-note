#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

static int find(struct pp* ss,char Name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ss->size; i++)
	{
		if (0 == strcmp(Name, ss->con[i].name))
		return i;
	}
	return -1;
}

void INIT(struct pp* ss)
{
	memset(ss->con, 0, sizeof(ss->con));
	ss->size = 0;
}

void add(struct pp* ss)
{
	if (ss->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名->:");
		scanf("%s", &ss->con[ss->size].name);
		printf("请输入年龄->:");
		scanf("%s", &ss->con[ss->size].age);
		printf("请输入性别->:");
		scanf("%s", &ss->con[ss->size].sex);
		printf("请输入电话号码->:");
		scanf("%s", &ss->con[ss->size].tele);
		printf("请输入居住地址->:");
		scanf("%s", &ss->con[ss->size].addr);
		ss->size++;
		printf("添加成功\n");
	}
}

void show(const struct pp* ss)
{
	int i = 0;
	if (ss->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-10s%-10s%-10s%-20s%-30s\n", "姓名", "年龄", "性别", "电话号码", "居住地址");
		for (i = 0; i < ss->size; i++)
		{
			printf("%-10s%-10s%-10s%-20s%-30s\n", &ss->con[i].name,
											   &ss->con[i].age,
											   &ss->con[i].sex,
											   &ss->con[i].tele,
											   &ss->con[i].addr);
		}
	}
}

void del(struct pp* ss)
{
	char Name[MAX_NAME] = { 0 };
	int i = 0;
	int j = 0;
	printf("请输入要删除人的名字->:");
	scanf("%s", &Name);
	int pos = find(ss, Name);
	if (pos == -1)
	{
		printf("无此人信息\n");
	}
	else
	{
		for (j = pos; j < ss->size; j++)
		{
			memcpy(&ss->con[j], &ss->con[j + 1], sizeof(ss->con[0]));
		}
		ss->size--;
		printf("删除成功\n");
	}
}

void serch(const struct pp* ss)
{
	char Name[MAX_NAME] = { 0 };
	int i = 0;
	printf("想要查询人的名字->:");
	scanf("%s", Name);
	int pos = find((struct pp*)ss, Name);
	if (pos == -1)
	{
		printf("无此人信息\n");
	}
	else
	{
		printf("%-10s%-10s%-10s%-20s%-30s\n", "姓名", "年龄", "性别", "电话号码", "居住地址");
		printf("%-10s%-10s%-10s%-20s%-30s\n", &ss->con[pos].name,
			&ss->con[pos].age,
			&ss->con[pos].sex,
			&ss->con[pos].tele,
			&ss->con[pos].addr);
	}
}

void modify(struct pp* ss)
{
	char Name[MAX_NAME] = { 0 };
	int i = 0;
	printf("要修改人的名字->:");
	scanf("%s", Name);
	int pos = find(ss, Name);
	if (pos == -1)
	{
		printf("无此人信息\n");
	}
	else
	{
		printf("请修改姓名->:");
		scanf("%s", &ss->con[pos].name);
		printf("请修改年龄->:");
		scanf("%s", &ss->con[pos].age);
		printf("请修改性别->:");
		scanf("%s", &ss->con[pos].sex);
		printf("请修改电话号码->:");
		scanf("%s", &ss->con[pos].tele);
		printf("请修改居住地址->:");
		scanf("%s", &ss->con[pos].addr);
		ss->size++;
		printf("修改成功\n");
	}
}

int sort_by_name(const void* e1,const void* e2)
{
	return strcmp(((struct peoinfo*)e1)->name, ((struct peoinfo*)e2)->name);
}