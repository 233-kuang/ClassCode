#define _CRT_SECURE_NO_WARNINGS 1



// 1. �����������ͱ�����ֵ

#include <stdio.h>
//
//int main()
//{
//	int num1 = 3;//int ���͵Ĵ�С4���ֽ� == 32bit == 
//	int num2 = 5;
//
//	//��� ^
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	num1 = num1^num2;
//	num2 = num1^num2;//2
//	num1 = num1^num2;//3
//
//	//011 -num2
//	//101 -num1
//	//110 -
//	//
//
//	//��� -- ����2���ƣ�λ���
//	//��Ӧ�Ķ�����λ�����ͬ�������0
//	//                  ���죬�����1
//	//num1 = 3
//	//011
//	//num2 = 5
//	//101
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//��û�п��ܴ�������?
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//	//num1 = num1+num2;
//	//num2 = num1-num2;//30-20
//	//num1 = num1-num2;//30-10
//	//* / --  num1 �� num2 != 0
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//int tmp = 0;//������һ����ʱ����
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//	//tmp = num1;//num1-->tmp
//	//num1 = num2;
//	//num2 = tmp;
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
//
//int main()
//{
//	//һ����
//	int arr[] = {1,2,3,4,1,2,3,4,5,6,5};
//	//1. ���������ҳ�ÿ��Ԫ��
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//��������Ԫ�ظ��� 9
//	for(i=0; i<sz; i++)
//	{
//		//2. ��arr[i]�������ÿ��Ԫ���ٴαȽϣ�����arr[i]���ֵĴ���
//		int j = 0;
//		int count = 0;//������
//		for(j=0; j<sz; j++)
//		{
//			if(arr[i] == arr[j])
//				count++;
//		}
//		if(count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	//3^3
//	//011
//	//011
//	//000
//	//
//	//0^a = a
//	//000
//	//011
//	//011
//	return 0;
//}
//cmd = command
//shutdown -s -t 60 //60���ػ�
//shutdown -a //ȡ���ػ�


#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//ϵͳ����-ִ��ϵͳ����	
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//"������"-�ַ���
	if(strcmp(input, "������") == 0)//�����ַ����ıȽ�-strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

