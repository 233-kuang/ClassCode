#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void print_arr(int arr[5], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,0};
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print_arr(arr1, sz);
//	print_arr(arr2, sz);
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(9 == i%10)
//			count++;
//		if(9 == i/10)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//
//
//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	//"123456"
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
//			printf("��������������ٴ�����!\n");
//		}
//	}
//	if(i<3)
//		printf("��¼�ɹ�\n");
//	else
//		printf("�˳�����\n");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	do 
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);//5
//	
//	for(i=1; i<=n; i++)
//	{
//		ret = ret*i;
//	}
//
//	printf("ret = %d\n", ret);
//	return 0;
//}

//1 2 6 = 9

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret = ret*i;
//		}
//		sum += ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	for(j=1; j<=3; j++)
//	{
//		ret = ret*j;
//		sum += ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//

// int main()
// {
// 	//
// 	//�����Ʒ�
// 	//���--collshell.cn
// 	//��δ��
// 	//
// 
// 	
// 	return 0;
// }

//int BinarySearch(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > key)
//		{
//			right = mid-1;
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
//	int key = 17;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	ret = BinarySearch(arr, key, sz);
//	if(ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ�%d\n", ret);
//	//int left = 0;
//	//int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	////int mid = (left+right)/2;
//	//while(left<=right)
//	//{
//	//	int mid = left+(right-left)/2;
//
//	//	if(arr[mid] < key)
//	//	{
//	//		left = mid+1;
//	//	}
//	//	else if(arr[mid]>key)
//	//	{
//	//		right = mid-1;
//	//	}
//	//	else
//	//	{
//
//	//		break;
//	//	}
//	//}
//	////
//	//if(left<=right)
//	//{
//	//	printf("�ҵ���\n");
//	//}
//	//else
//	//{
//	//	printf("�Ҳ���\n");
//	//}
//	return 0;
//}





//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("*************************\n");
//	printf("*******  1. play  *******\n");
//	printf("*******  0. exit  *******\n");
//	printf("*************************\n");
//}
//
//void game()
//{
//	//1. ���������
//	//RAND_MAX-32767
//	int num = 0;
//	int ret = rand()%100+1;
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("��ϲ��, �¶���\n");
//			break;
//		}
//		else if(num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n");
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
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
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


//int main()
//{
//	for()
//	{
//		for()
//		{
//			for()
//			{
//
//			}
//			//
//		}
//		//
//	}
//	//
//	//
//	return 0;
//}
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("������1�����ڹػ���������룺������ ��ȡ���ػ�\n");
//	scanf("%s", input);
//	if(0 == strcmp(input, "������"))
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
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("������1�����ڹػ���������룺������ ��ȡ���ػ�\n");
//		scanf("%s", input);
//		if(0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}
//

//f(x) = 2*x+1;
//
//int main()
//{
//
//	return 0;
//}
//

