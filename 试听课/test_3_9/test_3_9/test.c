#define _CRT_SECURE_NO_WARNINGS 1


//д��������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//1. �ػ�
	//shutdown -s -t 60 //����ʱ��ػ�
	//2. ��ʾ���룺������
	char input[20];//����һ���ַ����飬�����洢��������
	system("shutdown -s -t 60");//ִ��ϵͳ����
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//
	//3. �ж��������ȷ��
	if(strcmp(input, "������") == 0)//strcmpר���������Ƚ������ַ����Ĵ�С��	
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}




//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};//9 0-8
//	//����2
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//���������Ԫ�ظ���
//	for(i=0; i<sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("ret = %d\n", ret);
//	//
//	//3 5 3
//	//1 2 5 1 2
//	//
//
//	//3^3
//	//011
//	//011
//	//000
//	//0^5
//	//000
//	//101
//	//101-5
//	//
//	//�������
//	//int i = 0;
//	//int sz = sizeof(arr)/sizeof(arr[0]);//9
//	//for(i=0; i<sz; i++)
//	//{
//	//	//ͳ��arr[i]���ֵ���������г��ֵĴ���
//	//	int j = 0;
//	//	int count = 0;//������
//	//	for(j=0; j<sz; j++)
//	//	{
//	//		if(arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if(count == 1)
//	//	{
//	//		printf("%d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//	return 0;
//}
//
//int main()
//{
//	//printf - �⺯��- ��ӡ
//	//printf("�Ǻ�\n");
//
//	
//	//����2�����ͱ��������ǲ���ʹ����ʱ����
//	//����1
//	/*
//	empty = num1;
//	num1 = num2;
//	num2 = empty;
//	*/
//
//    //����2
//	//int - ���� - 4�ֽ� - 32bit - 32��������λ
//	//���ֵ
//	//
//	//long 
//	//long long
//	//long long long - ������
//	//
//	//num1 = num1+num2;//num1 = 30 num2 = 20
//	//num2 = num1-num2;//num1 = 30 num2 = 10
//	//num1 = num1-num2;//num1 = 20 num2 = 10
//	//
//	//����3
//	//������- ��(2����)λ���
//	//���ļ��㷽����
//	//��Ӧ�Ķ�����λ�����ͬ�������Ϊ0
//	//��Ӧ�Ķ�����λ������죬�����Ϊ1
//	int num1 = 3;//����
//	int num2 = 5;//��
//	int empty = 0;
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	//011 - num2
//	//101 - num1
//	//110 - 
//
//	num1 = num1^num2;//1
//	num2 = num1^num2;//2
//	num1 = num1^num2;//3
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	//ctrl+F5
//	return 0;
//}
