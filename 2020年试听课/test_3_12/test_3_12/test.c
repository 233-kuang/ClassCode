#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ػ�����
//cmd - command - ������

int main()
{
	char input[20] = {0};//��������������Ϣ
	//ִ�йػ�����
	system("shutdown -s -t 60");//ִ��ϵͳ�����
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	printf("������:>");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)//�ж������ַ����Ƿ����-strcmp()
	{
		system("shutdown -a");//ȡ���ػ�
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
//	int arr[] = {1,2,3,4,5,1,2,3,4,6,5};
//	//������-�������
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//��������Ԫ�ظ���
//	for(i=0; i<sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for(j=0; j<sz; j++)
//		{
//			if(arr[i] == arr[j])
//			{
//				count++;
//			}
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
//	int num1 = 3;//int sizeof(int)-4�ֽ�-���ֵ
//	int num2 = 5;
//
//	//3. ��� - λ����
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	num1 = num1^num2;//1
//	num2 = num1^num2;//2
//	num1 = num1^num2;//3
//
//	//
//	//���-��2����λ���
//	//������ͬΪ0������Ϊ1
//	//011-num2
//	//101-num1
//	//110-
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//2. �Ӽ���-�������
//	//printf("num1=%d num2=%d\n", num1, num2);
//	//num1 = num1+num2;//num1=30 num2=20
//	//num2 = num1-num2;//num1=30 num2=10
//	//num1 = num1-num2;
//	//printf("num1=%d num2=%d\n", num1, num2);
//
//	//1.
//	//int num3 = 0;
//	//printf("num1=%d num2=%d\n", num1, num2);
//	//num3 = num1;
//	//num1 = num2;
//	//num2 = num3;
//	//printf("num1=%d num2=%d\n", num1, num2);
//
//	return 0;
//}
// 
// int main()
// {
// 	//ʵ��
// 	//printf - print function - ��ӡ����-�⺯��
// 	//
// 	printf("hello world");
// 	return 0;
// }
// 

