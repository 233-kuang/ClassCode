#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	//welcome to bit!!!!!
	//###################
	//w#################!
	//we###############!!
	//wel#############!!!
	//....
	//welcome to bit!!!!!
	char arr[] = "bit";

	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";

	int left = 0;
	int right = strlen(arr1)-1;
	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	system("pause");
	return 0;
}


//
//int binary_search(int arr[], int k, int left, int right)
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
//	int k = 17;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//
//	int ret = binary_search(arr, k, left, right);
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d\n", ret);
//	}
//
//
//	//int mid = (left+right)/2;
//	
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//n
//	//1*2*3..*n
//
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	//1 2 6 = 9
//	for(j=1; j<=3; j++)
//	{
//		ret *= j;
//		sum = sum + ret;
//	}
//
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//
////
//int main()
//{
//	//n
//	//1*2*3..*n
//
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	//1 2 6 = 9
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	//n
//	//1*2*3..*n
//
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n", ret);
//	system("pause");
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
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//// 	for(; i<10; i++)
//// 	{
//// 		printf("hehe\n");
//// 	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("%d ", arr[i]);
//// 	}
//	for(i=100; i<=200; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	printf("hehe\n");
//	//	i=5;
//	//}
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//��ʼ��
//
//	while(i<=10)//�ж�
//	{
//		printf("%d ", i);
//		i++;//����
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//EOF  -- end of file
//
//	/*while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	//printf("hehe\n");
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//	//int ch = getchar();
//	//printf("%c\n", ch);
//
//	//getchar();
//	//getchar();
//	system("pause");
//	
//	return 0;
//}
//
//int main()
//{
//	//while(1)
//	//	printf("hehe\n");
//
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	//for(i=1; i<=100; i++)
//	//{
//	//	if(i%2==1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	int num = 3;
// 	if(5 == num)
// 	{
// 		printf("hehe\n");
// 	}
// 	else
// 	{
// 		printf("haha\n");
// 	}
// 	system("pause");
// 	return 0;
// }