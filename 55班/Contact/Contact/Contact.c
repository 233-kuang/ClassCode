#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset
	memset(pcon->data, 0, MAX*sizeof(PeoInfo));
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	if(pcon->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("����������:>");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("�������Ա�:>");
		scanf("%s", (pcon->data[pcon->sz].sex));
		printf("������绰:>");
		scanf("%s", (pcon->data[pcon->sz].tele));
		printf("�������ַ:>");
		scanf("%s", (pcon->data[pcon->sz].addr));
		pcon->sz++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	//����  �Ա�   ����   �绰    ��ַ
	printf("%10s\t%5s\t%5s\t%12s\t%20s\n", "����","�Ա�","����","�绰","��ַ");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%10s\t%5s\t%5d\t%12s\t%20s\n", 
			pcon->data[i].name, 
			pcon->data[i].sex,
			pcon->data[i].age,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindEntry(Contact* pc, char name[])
{
	int i = 0;
	for(i=0; i<pc->sz; i++)
	{
		if(strcmp(pc->data[i].name, name)==0)
			return i;
	}
	//û�ҵ�
	return -1;
}

void DelContact(Contact* pcon)
{
	char name[NAME_MAX] = {0};
	int ret = 0;
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if(ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ��
		int i = 0;
		for(i=ret; i<pcon->sz-1; i++)
		{
			pcon->data[i] = pcon->data[i+1];
		}
		pcon->sz--;
		printf("ɾ���ɹ�\n");
	}
}