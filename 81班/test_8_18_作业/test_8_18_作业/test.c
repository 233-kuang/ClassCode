#define _CRT_SECURE_NO_WARNINGS 1
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��
//	for(i=0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0; j<(line-1-i)*2-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=1000000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ��λ��
//		//i=123
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while(tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		//2. ��η���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. �ж�
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d %d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)//end of file
//	{
//		if(ch>='A' && ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else if(ch>='0' && ch<='9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}

#include <ctype.h>
//isupper
//islower
//isdigit
//toupper
//tolower
int main()
{
	int ch = 0;
	while((ch=getchar()) != EOF)//end of file
	{
		if(isupper(ch))
		{
			putchar(tolower(ch));
		}
		else if(islower(ch))
		{
			putchar(toupper(ch));
		}
		else if(isdigit(ch))
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}