#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,0};
//
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%d ", arr1[i]);
//	//}
//	//printf("\n");
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%d ", arr2[i]);
//	//}
//	//printf("\n");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum = sum + flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
// 
// int main()
// {
// 	int i = 0;
// 	int count = 0;
// 	for(i=1; i<=100; i++)
// 	{
// 		if(i%10==9)
// 			count++;
// 		if(i/10==9)
// 			count++;
// 	}
// 	printf("count = %d\n", count);
// 	return 0;
// }
// 

//
//#define EXP 0.000000001
//int main()
//{
//	//3.140;
//	//0.125
//	//0.015
//	//32bit
//	//11.00110100010101001010101000001010101010010
//	/*float f = 3.14f;
//	if((f-3.14)>-EXP && (f-31.4)<EXP)
//	{
//
//	}*/
//
//	//int num = 1;
//
//	//if(5 == num)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}
//
//#define EXP 0.00000001
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float a=0.0, b=0.0, c=0.0;
//	scanf("%f%f%f", &a, &b, &c);
//	if((a>-EXP)&&(a<EXP))
//	{
//		printf("����һԪ���η���\n");
//	}
//	else
//	{
//		float disc = b*b-4*a*c;
//		if(disc>-EXP && disc<EXP)
//		{
//			printf("��һ����:%f\n", -b/(2*a));
//		}
//		else if(disc>=EXP)
//		{
//			printf("����������%f %f\n", 
//				(-b+sqrt(disc))/(2*a),
//				(-b-sqrt(disc))/(2*a));
//		}
//		else
//		{
//			printf("�޽�\n");
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int day = 0;
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
//		printf("ѡ�����\n");
//		break;
//	}
//	/*if(1 ==day)
//	{
//		printf("����1\n");
//	}
//	else if(2 ==day)
//	{
//		printf("����2\n");
//	}
//	else if(3 == day)
//	{
//		printf("����3\n");
//	}
//	else if()*/
//	return 0;
//}
//
//
//int main()
//{
//	int day = 0;
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
//		printf("ѡ�����\n");
//		break;
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//
//	{
//	case 1:
//		m++;//m=3
//	case 2:
//		n++;//n=2
//	case 3:
//		switch (n)//
//		{//switch
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}//m=4,n=3
//	case 4:
//		m++;
//		break;//m=5
//	default:break;
//	}
//	
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//
//void test()
//{
//	printf("haha\n");
//}
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,4,6,8,0,10};
//	int i = 0;
//	int j = 0;
//	int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//	int sz2 = sizeof(arr2)/sizeof(arr2[0]);
//	int has = 0;
//	for(i=0; i<sz1; i++)
//	{
//		for(j=0; j<sz2; j++)
//		{
//			if(arr1[i] == arr2[j])
//			{
//				printf("��\n");
//				goto end;
//			}
//		}
//	}
//	printf("û��\n");
//end:
//	return 0;
//}

//
//int main()
//{
//	char input[10] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬������1����֮��ػ���������룺��������ȡ���ػ�\n");
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

#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ע�⣬������1����֮��ػ���������룺��������ȡ���ػ�\n");
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

//
//int main()
//{
//	//0-9
//	int i = 0;//��ʼ��
//	while(i<10)//�ж�
//	{
//		printf("%d ", i);
//		if(i == 5)
//			continue;
//		i++;//��������
//	}
//	//...
//
//// 	while(1)
//// 		printf("hehe\n");
//	//...
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	char passwd[10] = {0};
//	int ch = 0;
//	printf("����������:>");
//	scanf("%s", passwd);
//	printf("��ȷ��:(Y/N)>");
//	/*
//	while((ch=getchar()) != '\n')
//	{
//		;
//	}
//	*/
//	fflush(stdin);//
//	ch = getchar();
//	if('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//

// 
// int main()
// {
// 	//char ch = '\0';
// 	char arr[] = {'a', 'b', 'c'};
// 	printf("%s\n", arr);
// 	return 0;
// }
int main()
{
	char arr[10];
	printf("%s\n", arr);
	return 0;
}