#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("���ź����Ҳ���\n");
//	}
//
//	return 0;
//}
//
//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//	//�Ҳ���
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	
//	int ret = 0;
//	ret = binary_search(arr, k);
//	if(ret == -1)
//	{
//		printf("���ź����Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	
//
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//	//�Ҳ���
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("���ź����Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!

#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr[] = "bit";
//
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//
//strlen-�ַ����󳤶�
//strcmp-�ַ����Ƚ�
//
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//
//	return 0;
//}


//��������Ϸ

void menu()
{
	printf("****************************\n");
	printf("*****      1. play     *****\n");
	printf("*****      0. exit     *****\n");
	printf("****************************\n");
}
 //RAND_MAX


#include <stdlib.h>
#include <time.h>
//
//void game()
//{
//	//1. �������ֵ
//	int ret = 0;
//	int guess = 0;
//	//ʱ���
//	ret = rand()%100+1;
//
//	//printf("%d\n", ret);
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if(guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if(guess > ret)
//		{
//			printf("�´���\n");
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
//			printf("ѡ����� ����ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//

//void Test()
//{
//flag:
//	printf("haha\n");
//}

//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//

#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	//�ػ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
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
//	char input[20] = {0};
//	//�ػ�����
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("��ע����ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if(strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}
//

//f(x) = 2*x+5;
//
//int f(int x)
//{
//	return 2*x+5;
//}
//
//int main()
//{
//	int n = 2;
//	int ret = f(n);
//	printf("%d\n", ret);
//	return 0;
//}
//size_t
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%s\n", arr);
//
//	memset(arr+6, '*', 3);
//	printf("%s\n", arr);
//	return 0;
//}