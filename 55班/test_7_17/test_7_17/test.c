#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}while(i<=10);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	//scanf("%d", &n);
//	//1 + 2 + 6 = 9
//
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;//sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for(n=1; n<=3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;//sum += ret;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	//���ֲ���/�۰����
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
//			printf("�ҵ���:%d\n", mid);
//			break;
//		}
//	}
//	//
//	if(left>right)
//	{
//		printf("���ź����Ҳ���\n");
//	}
//
//	system("pause");
//	return 0;
//}

//
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!
//
#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//
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
//		//˯��
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}

//"123456"
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)//strcmp strlen
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������!\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	system("pause");
//	return 0;
//}
//
//void menu()
//{
//	printf("***********************************\n");
//	printf("********      1.play       ********\n");
//	printf("********      0.exit       ********\n");
//	printf("***********************************\n");
//}
////time_t
//void game()
//{
//	//1. ����һ�������
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("ret = %d\n", ret);
//	//RAND_MAX
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
//	srand((unsigned int)time(NULL));//ʱ���
//
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



//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
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
//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//strcmp--�ж������ַ����Ƿ����
//		//��ȷ���0
//		//��һ���ַ������ڵڶ����ַ�����ʱ�򣬷���>0
//		//��һ���ַ���С�ڵڶ����ַ�����ʱ�򣬷���<0
//
//		if(strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

