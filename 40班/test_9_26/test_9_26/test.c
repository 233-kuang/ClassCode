#define _CRT_SECURE_NO_WARNINGS 1

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
//	//��ӡ�°벿��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		for(j=0; j<2*(line-1-i)-1; j++)
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
//	for(i=0; i<=999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		//1234
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp = tmp/10;
//		}
//		//3. �ж�
//		if(sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		tmp = tmp*10+a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//�β�
//ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//�ı��β��ǲ���ı�ʵ�ε�
//
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	if(a<b)
//	{
//		//ʵ��
//		Swap(&a, &b);
//	}
//
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	//"123456"
//
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(0 == strcmp(password, "123456"))
//		{
//			break;
//		}
//		else
//		{
//			printf("�������,���������룡\n");
//		}
//	}
//	if(i<3)
//	{
//		printf("��¼�ɹ�\n");
//	}
//	else
//	{
//		printf("�˳�����\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret = ret * i;	
//		}
//		//
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6
//	for(j=1; j<=3; j++)
//	{
//		ret = ret * j;	
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
// talk is cheap, show me the code
//
//

//
//int binary_search(int arr[], int key, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>key)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<key)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	int ret= binary_search(arr, key, left, right);
//	if(ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���:%d\n", ret);
//	return 0;
//}
//
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//RAND_MAX-32767
//	//1.���������
//	int ret = rand()%100+1;
//	int num = 0;
//	//2.������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		else if(num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n")
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//





