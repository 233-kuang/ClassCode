#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for(i=0; i<line; i++)
//	{
//		//��ӡһ��
//		//1. ��ӡ�ո�
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//2. ��ӡ*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		//1. �ո�
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//2. *
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

#include <math.h>

int main()
{
int i = 0;
for(i=0; i<=999999; i++)
{
	//�ж�i�Ƿ�Ϊˮ�ɻ���
	//1. ��λ��
	//123
	int count = 1;
	int tmp = i;
	int sum = 0;

	while(tmp/10)
	{
		count++;
		tmp = tmp/10;
	}
	//2. ����η���
	tmp = i;
	
	while(tmp)
	{
		sum += pow(tmp%10, count);
		tmp = tmp/10;
	}
	//3. �ж�
	if(sum == i)
	{
		printf("%d ", i);
	}
}
return 0;
}
