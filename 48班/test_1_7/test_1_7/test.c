#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
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
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	system("pause");
//	return 0;
//}
//


//int binary_search(int *arr, int k)
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
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
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}


#include <stdio.h>

//
//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//...
//welcome to bit!!!!
//
#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
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
//	system("pause");
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[10] = {0};
//	//"123456"
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(i>=3)
//		printf("�����������������˳�����\n");
//	system("pause");
//	return 0;
//}
//
//#include <time.h>
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****   1. play   0.exit    ***\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//time_t
//	//1. ����һ�������
//	ret = rand()%100+1;
//	//printf("ret = %d\n", ret);
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
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
//			printf("ѡ����� ����ѡ��!\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	char input[10] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ע�⣬��ĵ�����1���Ӻ�ػ���������룺��������ȡ���ػ���\n");
//		scanf("%s", input);
//		if(strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//f(x) = 2*x+1;
//
//int main()
//{
//	char arr[10] = "aaaaaaaa";
//	char arr2[] = {'b', 'i', 't'};
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%s\n", arr);
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
int get_max(int x, int y)
{
	return (x>y?x:y);
}

//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}

void Swap(int* px, int *py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

	//int max = a>b?a:b;
	//int max = get_max(a, b);
	//printf("max = %d\n", max);
	system("pause");
	return 0;
}
