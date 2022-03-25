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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������->:");
		scanf("%s", &ss->con[ss->size].name);
		printf("����������->:");
		scanf("%s", &ss->con[ss->size].age);
		printf("�������Ա�->:");
		scanf("%s", &ss->con[ss->size].sex);
		printf("������绰����->:");
		scanf("%s", &ss->con[ss->size].tele);
		printf("�������ס��ַ->:");
		scanf("%s", &ss->con[ss->size].addr);
		ss->size++;
		printf("��ӳɹ�\n");
	}
}

void show(const struct pp* ss)
{
	int i = 0;
	if (ss->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-10s%-10s%-10s%-20s%-30s\n", "����", "����", "�Ա�", "�绰����", "��ס��ַ");
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
	printf("������Ҫɾ���˵�����->:");
	scanf("%s", &Name);
	int pos = find(ss, Name);
	if (pos == -1)
	{
		printf("�޴�����Ϣ\n");
	}
	else
	{
		for (j = pos; j < ss->size; j++)
		{
			memcpy(&ss->con[j], &ss->con[j + 1], sizeof(ss->con[0]));
		}
		ss->size--;
		printf("ɾ���ɹ�\n");
	}
}

void serch(const struct pp* ss)
{
	char Name[MAX_NAME] = { 0 };
	int i = 0;
	printf("��Ҫ��ѯ�˵�����->:");
	scanf("%s", Name);
	int pos = find((struct pp*)ss, Name);
	if (pos == -1)
	{
		printf("�޴�����Ϣ\n");
	}
	else
	{
		printf("%-10s%-10s%-10s%-20s%-30s\n", "����", "����", "�Ա�", "�绰����", "��ס��ַ");
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
	printf("Ҫ�޸��˵�����->:");
	scanf("%s", Name);
	int pos = find(ss, Name);
	if (pos == -1)
	{
		printf("�޴�����Ϣ\n");
	}
	else
	{
		printf("���޸�����->:");
		scanf("%s", &ss->con[pos].name);
		printf("���޸�����->:");
		scanf("%s", &ss->con[pos].age);
		printf("���޸��Ա�->:");
		scanf("%s", &ss->con[pos].sex);
		printf("���޸ĵ绰����->:");
		scanf("%s", &ss->con[pos].tele);
		printf("���޸ľ�ס��ַ->:");
		scanf("%s", &ss->con[pos].addr);
		ss->size++;
		printf("�޸ĳɹ�\n");
	}
}

int sort_by_name(const void* e1,const void* e2)
{
	return strcmp(((struct peoinfo*)e1)->name, ((struct peoinfo*)e2)->name);
}