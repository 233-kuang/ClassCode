#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//stdio.h std input output 

//main ���� - ������ - ��������
//
// int main()
// {
// 	//printf - print function - ��ӡ���� - �������
// 	//�⺯��-����ͷ�ļ�
// 	printf("hello world\n");
// 	return 0;
// }


//����2��������ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = 0;//��ƿ
//	//3. ���
//	//��� - ����2���ƣ�λ���
//	//������ͬΪ0��������1
//	//
//	printf("a = %d b = %d\n", a, b);
//	a = a^b;//1
//	b = a^b;//2
//	a = a^b;//3
//
//	//011-b
//	//101-a
//	//110
//	printf("a = %d b = %d\n", a, b);
//	//2. �Ӽ���
//	//���⣺���
//	//int - 4�ֽ�-32bit - ���ͱ���������
///*
//	printf("a = %d b = %d\n", a, b);
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a = %d b = %d\n", a, b);
//*/
//	//1. ��ʱ�����ķ���
//	/*printf("a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n", a, b);*/
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	//2. ���
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	//3^3^5 = 5
//	//
//	//3^3 = 0
//	//011
//	//011
//	//000
//	//0^5 = 5
//	//000
//	//101
//	//101
//	//
//	//1. ������ⷨ
//	//�ҳ�ֻ����һ�ε�����
//// 	int i = 0;
//// 	int sz = sizeof(arr)/sizeof(arr[0]);
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		//ͳ��arr[i]��������arr�����г��ֵĴ���
//// 		int j = 0;
//// 		int count = 0;//������
//// 		for(j=0; j<sz; j++)
//// 		{
//// 			if(arr[i] == arr[j])
//// 			{
//// 				count++;
//// 			}
//// 		}
//// 		if(count == 1)
//// 		{
//// 			printf("%d\n", arr[i]);
//// 			break;
//// 		}
//// 	}
//	return 0;
//}


#include <stdlib.h>
#include <string.h>

int main()
{
	//�ػ�����
	//����ػ�
	//cmd - command - ����
	char input[20] = {0};
	system("shutdown -s -t 60");//ִ��ϵͳ����
again:
	printf("��ע�⣬��ĵ�����1���Ӻ�ػ������������������ȡ���ػ�\n");
	printf("������:>");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)//�ַ����Ƚ�-strcmp()
	{
		system("shutdown -a");//ȡ���ػ�
	}
	else
	{
		goto again;
	}

	return 0;
}