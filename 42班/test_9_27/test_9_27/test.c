#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0;i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = {1,3,5,7,9,11,13};
//	int arr2[] = {2,4,6,8,0,-1,-2};
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	print_arr(arr1, sz);
//	print_arr(arr2, sz);
//	for(i=0; i<sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print_arr(arr1, sz);
//	print_arr(arr2, sz);
//
//	/*for(i=0;i<sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");*/
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for(i=1; i<=100; i++)
//	{
//		sum  += flag*1.0/i;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}


// int main()
// {
// 	int i=0;
// 	int count = 0;
// 
// 	for(i=1; i<=100; i++)
// 	{
// 		if(9 == i%10)
// 			count++;
// 		if(9 == i/10)
// 			count++;
// 	}
// 	printf("count = %d\n", count);
// 	return 0;
// }

//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//1. ��ӡ�ϰ벿��
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
//	//2. ��ӡ�°벿��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		//1. ��ӡ�ո�
//		int j = 0;
//		for(j=0; j<i+1; j++)
//		{
//			printf(" ");
//		}
//		//2. ��ӡ*
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
//
//	for(i=0; i<=9999999; i++)
//	{
//		//1. ȷ��λ��
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//		//i=123
//		while(tmp>9)
//		{
//			count++;
//			tmp /= 10;
//		}
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. �жϴ�ӡ
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

// int main()
// {
// 	int a = 0;
// 	int n = 0;
// 	int i = 0;
// 	int sum = 0;
// 	int tmp = 0;
// 	scanf("%d%d", &a, &n);
// 	for(i=0; i<n; i++)
// 	{
// 		tmp = tmp*10+a;
// 		sum += tmp;
// 	}
// 	printf("%d\n", sum);
// 	return 0;
// }
// 

//
//���ֲ���--�۰����
//int binary_search(int arr[], int key, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(key > arr[mid])
//		{
//			left = mid+1;
//		}
//		else if(key < arr[mid])
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
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	int ret = binary_search(arr, key, left, right);
//	if(ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���:%d\n", ret);
//
//
//		//int mid = (left+right)/2;
//
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
//	printf("*******    1. play        ******\n");
//	printf("*******    0. exit        ******\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//time_t
//	//1. ���������
//	int ret = 0;
//	int num = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("��ϲ��,�¶���\n");
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
//			printf("ѡ�����, ������ѡ��!\n");
//			break;
//		}
//		//
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
//

//
//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ�����1�����ڹػ�,�������:������,��ȡ���ػ�!\n");
//	scanf("%s", arr);
//	if(0 == strcmp(arr, "������"))
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
//	char arr[20] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ĵ�����1�����ڹػ�,�������:������,��ȡ���ػ�!\n");
//		scanf("%s", arr);
//		if(0 == strcmp(arr, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//
//
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("haha\n");
//	goto flag;
//	return 0;
//}
//
//
//<Cר�ұ��>
//linux
//

//f(x) = 2*x+1;
// int Add(int a, int b)
// {
// 	a+b;
// }

int main()
{

	return 0;
}










