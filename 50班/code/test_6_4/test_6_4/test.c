#define _CRT_SECURE_NO_WARNINGS 1
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
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	
//	for(i=0; i<=9999999; i++)
//	{
//		//i�Ƿ�Ϊˮ�ɻ���
//		//1. ȷ��i�Ǽ�λ��
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while(tmp/10)//12
//		{
//			n++;
//			tmp=tmp/10;
//		}
//		//2. ����i��ÿһλ�������
//		tmp = i;
//		while(tmp)
//		{
//			sum  = sum + pow(tmp%10, n);
//			tmp = tmp/10;
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

//1234


// int main()
// {
// 	int n = 0;
// 	int a = 0;
// 	int sum = 0;
// 	int i = 0;
// 	int k = 0;
// 	scanf("%d%d", &a, &n);
// 	for(i=0; i<n; i++)
// 	{
// 		k = k *10 +a;
// 		sum = sum + k;
// 	}
// 	printf("%d\n", sum);
// 	return 0;
// }

//
//int main()
//{
//	int ch = 0;
//	int count = 0;
//	//{{}}
//	//{}{}{{{}}}
//	//}}}{{{
//	//{}}{
//
//	while((ch=getchar()) != EOF)
//	{
//		//�ж�ƥ��
//		if('{' == ch)
//		{
//			count++;
//		}
//		else if(('}' == ch) && (count!=0))
//		{
//			count--;
//		}
//		else if(('}'==ch) && (count==0))
//		{
//			printf("��ƥ��\n");
//			return 0;
//		}
//	}
//	if(count == 0)
//	{
//		printf("ƥ��\n");
//	}
//	else
//	{
//		printf("��ƥ��\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	//while(���ʽ)
//	//{
//	//	;
//	//}
//	//int i = 0;//��ʼ��
//
//	//while(i<10)//�ж�
//	//{
//	//	printf("%d\n", i);
//	//	i++;//����
//	//}
//	int i = 0;
//	
//	for(i=0; i<10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);	
//	}
//	//while(i<10)
//	//{
//	//	if(i == 5)
//	//		continue;
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	//for(i=100; i<201; i++)
//	return 0;
//}
//int main()
//{
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("hehe\n");
//// 	}
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//
//int main()
//{
//	/*int x = 0;
//	int y = 0;
//	for(x=0,y=0; x<3,y<10; ++x, y++)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}
//
//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//...
//welcome to bit!!!!!!
//
//
//#include <Windows.h>
//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abc";
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");
//		printf("%s\n", arr2);
//		Sleep(100);
//		left++;
//		right--;
//	}
//	return 0;
//}
//

#include <string.h>
#include <stdio.h>
// 
// int main()
// {
// 	//"123456"
// 	char arr[10] = {0};
// 	int i = 0;
// 	char *p = "123456";
// 	for(i=0; i<3; i++)
// 	{
// 		printf("����������:>");
// 		scanf("%s", arr);
// 		if(strcmp(arr, p) == 0)
// 		{
// 			printf("��¼�ɹ�\n");
// 			break;
// 		}
// 		else
// 		{
// 			printf("�������\n");
// 		}
// 	}
// 	//...
// 	if(i == 3)
// 	{
// 		printf("������������˳�����\n");
// 	}
// 	return 0;
// }
// 
//
//int main()
//{
//	char arr[] = "abcdef";//7
//	char *p = "abcdef";//4
//	printf("%c\n", *p);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	//do
//	//	printf("hehe\n");
//	//while(1);
//	int i = 0;
//
//	do
//	{
//		printf("%d ", i);
//		if(i == 5)
//			continue;
//		i++;
//	}
//	while(i<10);
//
//	return 0;
//}
#include <windows.h>
#include <stdio.h>
// 
// int main()
// {
// 	int arr[100][5] = {0};
// 	int i = 0;
// 	int j = 0;
// 	int sum = 0;
// 	for(i=0; i<100; i++)
// 	{
// 		for(j=0; j<5; j++)
// 		{
// 			sum = sum +arr[i][j];
// 		}
// 	}
// 
// 	for(i=0; i<5; i++)
// 	{
// 		for(j=0; j<100; j++)
// 		{
// 			sum = sum + arr[j][i];
// 		}
// 	}
// 
// 	return 0;
// }
//

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	//1 2 6=9
//	for(j=1; j<=3; j++)
//	{
//		for(i=1; i<=j; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}
