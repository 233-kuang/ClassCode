//
//�˵���Ϣ������+����+�Ա�+�绰+סַ
//����1000���˵���Ϣ
//
//������ϵ��
//ɾ��
//�޸�
//����
//��ʾ
//����
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

#define MAX 1000

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo data[MAX];//����˵���Ϣ
	int sz;//��Ч��Ϣ�ĸ���
}Contact, *pContact;

//pContact=== Contact* == struct Contact*

void AddContact(struct Contact* pcon);
void ShowContact(struct Contact* pcon);
void InitContact(pContact pcon);
void DelContact(pContact pcon);
void SeachContact(pContact pcon);
void ModifyContact(pContact pcon);
void SortContact(pContact pcon);

//��̬��ͨѶ¼
//1000

//��̬�İ汾
//

//�ļ�

//
//���ݿ�-MySQL
//SQL-SERVER--weiruan
//Oracle
//




