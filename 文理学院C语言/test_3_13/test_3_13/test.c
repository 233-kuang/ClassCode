#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//ʵ���㷨
//	//�� 5��
//	int t = 1;
//	int i = 2;
//
//	while(i<=5)
//	{
//		t = t*i;//1
//		i = i+1;//2
//	}
//
//	printf("t = %d\n", t);
//	return 0;
//}
//
//int main()
//{
//	double sum = 1.0;
//	int deno = 2;
//	int sign = 1;
//	double term = 0.0;
//
//	while(deno<=100)
//	{
//		sign = sign*(-1);
//		term = sign*(1.0/deno);
//		sum = sum+term;
//		deno = deno+1;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	//�ж�����
//	//�ж�n�Ƿ�Ϊ����
//	//2->n-1
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//���� 2->n-1ȥ�Գ�n
//	for(i=2; i<n; i++)
//	{
//		if(n%i==0)
//		{
//			break;
//		}
//	}
//	//1,2
//	if(i<n)
//		printf("%d��������\n", n);
//	else
//		printf("%d������\n",  n);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		if(i==5)
//			continue;//��������ѭ����continue��ߵĴ��룬ֱ�ӵ�forѭ���ĵ�������
//
//		//if(i == 5)
//		//	break;//��ֹѭ��
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//�ػ�����
//���г�����ĵ�����1���Ӻ�͹ػ���������룺������ȡ���ػ�
//cmd - command - ����

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};//��Ž��յ�����
	//1. ��ʱ�ػ�
	system("shutdown -s -t 60");//ִ��ϵͳ�����
	//2. ���룺������
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//����
	if(strcmp(input, "������") == 0)//�����ַ����ıȽ�-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

