#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 1;
//
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	int ret = binary_search(arr, k, left, right);
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//....
//welcome to bit!!!!!
//
#include <string.h>
#include <windows.h>
//
//int main()
//{
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
//		Sleep(100);
//		system("cls");
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	//"123456"
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(0 == strcmp(password, "123456"))//string compare
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	system("pause");
//	return 0;
//}
//

//#include <time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("****     1. play     0. exit   ***\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	//
//	//time_t-ʱ���
//	//
//	//1. ���������
//	//RAND_MAX-32767
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
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
//			game();//����Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		//
//	} while (input);
//	system("pause");
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
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if(0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("������� ����������!\n");
//		goto again;
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if(0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("������� ����������!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//f(x) = 2*x+1;
//f(x, y) = x+y;

//NULL-��ָ��
//null-'\0'
//NUL- '\0'
//int  main()
//{
//	char arr1[100] = "xxxxxxx";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit!!";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	//int max = get_max(a, b);
//	//max = get_max(2, 3);
//	//max = get_max(2, 3+5);
//	//max = get_max(2, get_max(3, 5));
//
//
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}


//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ��

//�β�
void Swap1(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int*px, int *py)
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
	//ʵ��
	//Swap1(a, b);
	Swap2(&a, &b);
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}