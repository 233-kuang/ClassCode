#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n)
{
	int i = 0;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if(is_prime(i) == 1)
		{
			printf("e%d ", i);
		}
	}
	system("pause");
}

//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ��

//�β�
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *pa, int *pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//ʵ��
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//// 	int tmp = a;
//// 	a = b;
//// 	b = tmp;
//
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	/*if(x>y)
//	return x;
//	else
//	return y;*/
//	return (x>y)?(x):(y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int main()
//{
//	//memset
//	char arr[] = "hello world";
//	memset(arr, 'a', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//
//RAND_MAX
//0-32767
//
#include <time.h>

//char * strcpy ( char * destination, const char * source );
//null
//NUL
//'\0'
//
//int main()
//{
//	char arr1[20] = "aaaaaaaa";
//	char arr2[] = "bit";
//	//�ַ�������-strcpy
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}

//f(x) = 2*x+1;
//int main()
//{
//
//	return 0;
//}
//
//��Cר�ұ�̡�
//

//err
//void test()
//{
//tag:
//	printf("test\n");
//}
//
//int main()
//{
//	printf("hehe\n");
//	goto tag;
//	return 0;
//}

//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if(strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if(strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
//

//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play       ******\n");
//	printf("*******     0. exit       ******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//1. ���������
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if(guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
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
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);//123456
//		if(strcmp(password, "123456") == 0)//string compare
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������,���������룡����\n");
//		}
//	}
//	if(i == 3)
//		printf("������������˳�����\n");
//	system("pause");
//	return 0;
//}

//
//github
//stackoverflow
//
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}
//
//int BinarySearch(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
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
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	//TDD-������������
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = BinarySearch(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//


//
//int BinarySearch(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
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
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	//TDD-������������
//	int ret = BinarySearch(arr, k, left, right);
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}