#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Maxsize 10000           //˳�����ܵ���󳤶�
typedef char elemtype;          //����Ϊchar��
typedef struct sequlist
{
	elemtype data[Maxsize];        //����˳���Ϊһά����
	int last;                 //lastΪ�������һ��Ԫ�ص��±�
}SequenList;
SequenList * Init_SequenList()
{
	SequenList * L;                //����˳���ָ�����
	L=(SequenList * ) malloc (sizeof(SequenList));
	//��������ڴ�ռ�
	if(L != NULL)
	{
		L->last= -1;   //����˳���ĳ���lastΪ-1����ʾΪ��
	}
	return L;                     //����˳�����׵�ַ
}
int SequenList_Length(SequenList *L)
{
	return(L->last+1);              //����˳���ĳ���
}

int Insert_SequenList(SequenList *L,elemtype x, int i)
//L��sequenlist���͵�ָ�����
//x�Ǵ������������Ԫ��ֵ��i��˳����в����λ��
{
	int j;
	if(L->last>=Maxsize-1)      //���˳����Ƿ�����
	{
		return 0;
	}
	if(i<1||i>L->last+2)        //����λ����Ч�Լ��
	{
		return -1;
	}
	for(j=L->last;j>=i-1;j--)      //�ڵ�i��λ�ò����½��x
		L->data[j+1]=L->data[j];  //������������ƶ�һ��λ��
	L->data[i-1]=x;               //����x����i��λ��
	L->last=L->last+1;            //��˳����ȼ�1
	return 1;
}
int Search_SequenList(SequenList *L,elemtype key)
{
	int i;
	for(i=0;i<=L->last;i++)
		//����Ԫ��������key���бȽ�
		if(L->data[i] == key)
			return (i+1);
	return 0;
}
int Delete_SequenList(SequenList *L,int i)
//ɾ����i��λ���ϵĽ��
{
	int j;
	if(i<1||i>L->last+1)            //���ָ��λ�õ���Ч��
	{
		return 0;
	}
	else
	{
		for(j=i;j<=L->last;j++)
			L->data[j-1]=L->data[j];        //���ǰ��
		L->last--;                      //����1
	}
	return 1;
}
elemtype GetData_SequenList(SequenList *L,int i)
{
	if(i<1||i>L->last+1)            //λ����Ч�Լ��
	{
		return 0;
	}
	else
		return (L->data[i-1]);         //�����������ֵ
}
int menu()
{
	int m;
	printf("���ܲ˵�\n");
	printf("===========\n");
	printf("1.�������\n");
	printf("2.���ҹ���\n");
	printf("3.ȡ����Ԫ��\n");
	printf("4.���빦��\n");
	printf("5.ɾ������\n");
	printf("0.�˳�\n");
	printf("===========\n");
	printf("������Ҫѡ��Ĺ���:\n");
	scanf("%d",&m);
	while(m>5||m<0)
	{
		printf("ѡ������\n���������룺");
		scanf("%d",&m);
	}
	return m;
}
int main()
{
	SequenList * pSeq = NULL;
	int m = menu();
	int key;
	int pos = 0;
	switch(m)
	{
	case 0:exit(0);break;
	case 1:
		pSeq = Init_SequenList();
		break;
	case 2:
		printf("��������Ҫ���ҵ�����:>");
		scanf("%d", &key);
		Search_SequenList(pSeq,key);
		break;
	case 3:
		printf("��������Ҫ��ȡԪ�ص��±�:>");
		scanf("%d", &key);
		GetData_SequenList(pSeq, key);
		break;
	case 4:
		printf("��������Ҫ��������ݺ�λ��:>");
		scanf("%d%d", &key, &pos);
		Insert_SequenList(pSeq, key, pos);
		break;
	case 5:
		printf("��������Ҫɾ�������ݵ�λ��:>");
		scanf("%d", &pos);
		Delete_SequenList(pSeq, pos);
		break;
	default:break;
	}
	return 0;
}
// 
// int main()
// {
// 	printf("%c\n", '\x045');//
// 	//printf("%d\n", strlen("abcdef"));//
// 	//printf("%d\n", strlen("c:\test\32\test.c"));//12 15 14 11 13 
// 
// 
// 	//c:\test\test.c
// 
// 	//printf("c:\\test\\test.c\n");
// 	//printf("(are you ok\?\?)\n");
// 	//printf("%c\n", '\'');
// 	//printf("%s", "\"");
// 	//printf("\a\a\a\a\a\a\a\a\a");
// 
// 
// 	return 0;
// }
//
//int main()
//{
//	//"abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//
//	printf("%s\n", "abcdef");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
////ö��
//enum Sex
//{
//	//ö�ٳ���
//	MALE=5,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s1 = MALE;
//	enum Sex s2 = FEMALE;
//	enum Sex s3 = SECRET;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}
//
//#define ����ı�ʶ������
// #define MAX 1000
// 
// int main()
// {
// 	//MAX = 2000;
// 	int arr[MAX];
// 	printf("%d\n", MAX);//1000	
// 	return 0;
// }
//
//int main()
//{
////	3;
////	3.14;
//	//3 = 5;
//	//const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);//20
//	//const int n = 10;
//	//int arr[n] = {0};
//
//	return 0;
//}

//int main()
//{
//	{
//		int age = 20;
//	}
//	printf("%d\n", age);
//	return 0;
//}

//int age = 10;
//
//void print()
//{
//	printf("2:%d\n", age);
//}
//int main()
//{
//	printf("1:%d\n", age);//
//	print();
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
// int age = 20;
// //�����
// int main()
// {
// 	int age = 10;
// 	{
// 		int age = 30;
// 		printf("age  =%d\n", age);//
// 	}
// 	return 0;
// }


//
//int main()
//{
//	char ch = 'B';
//	short age = 20;
//	float weight = 150.0;//double
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}

// int main()
// {
// 	printf("hehe\n");
// 	//system("pause");//��ͣ
// 	return 0;
// }
// 
// int main()
// {
// 	int num = 20;
// 	scanf("%d", &num);
// 	//scanf_s
// 
// 	printf("num = %d\n", num);
// 
// 	return 0;
// }

//#include <stdio.h>

//������--��������

// int main()
// {
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 
// 	return 0;
// }
