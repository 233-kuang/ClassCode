#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int arr1[] = {1,3,5,7,9,11};
//	int arr2[] = {2,4,6,8,0,12};
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	//tmp = arr1;
//	//arr1 = arr2;
//	//arr2 = tmp;
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum  = sum + 1.0/i*flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;//������
//
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//		{
//			count++;
//		}
//		if(i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//
//	system("pause");
//	return 0;
//}
//
//

//
//int main()
//{
//	//��ӡ����
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//1.��ӡ�ϰ벿��
//	for(i=0; i<line; i++)
//	{
//		//��ӡһ��
//		//a. �ȴ�ӡ�ո�
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//b. ��ӡ*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//2.��ӡ�°벿��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		//a. �ո��ӡ
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//b. *�Ĵ�ӡ
//		for(j=0; j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<=1000000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ����i�Ǽ�λ��
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//
//		while(tmp=tmp/10)
//		{
//			count++;
//		}
//		//2. ��ȡ��i��ÿһλ��������η��ͣ��ж�
//		//123
//		tmp = i;
//		while(tmp)
//		{
//			//sum = sum + pow(i%10, count);
//			sum += (int)pow(tmp%10, count);
//			tmp/=10;
//		}
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);//2 5
//	for(i=0; i<n; i++)
//	{
//		tmp = tmp*10+a;
//		sum += tmp;
//	}
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int day = 0.0;
//	int n = 1;
//	scanf("%d", &day);
//	//switch���
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
//	}
//	//if(1 == day)
//	//{
//	//	printf("����1\n");
//	//}
//	//else if(2 == day)
//	//{
//	//	printf("����2")
//	//}
//	//else if(3 == day)
//	//{
//	//	printf("����3")
//	//}
//	////
//
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
//	//switch���
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
//
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
//		case 2:m++;n++;
//			break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	while(1)
//		printf("hehe\n");
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	//int ch = getchar();
// 	//putchar(ch);
// 	//EOF-- end of file
// 	int ch = 0;
// 	while((ch=getchar()) != EOF)
// 	{
// 		putchar(ch);
// 	}
// 
// 	system("pause");
// 	return 0;
// }


//int main()
//{
//	int i = 0;//��ʼ��
//
//	while(i<10)//�ж�
//	{
//		printf("%d\n", i);
//
//		i++;//����
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//
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
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for(i=0; i<=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//	}
//	for(i=100; i<201; i++)
//	{
//	}
//	return 0;
//}
//
//int main()
//{
//	for(;;)
//	{
//		printf("hehe\n");
//	}
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
//	system("pause");
//	return 0;
//}
//
//
