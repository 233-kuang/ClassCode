#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//typedef struct Stu
//{
//	//ѧ��������
//	char name[20];
//	short age;
//	char id[20];
//}Stu;

//struct Stu
//{
//	//ѧ��������
//	char name[20];
//	short age;
//	char id[20];
//};
//
//int main()
//{
//	struct Stu s = {"����", 20, "20190101"};
//	//Stu ss;
//	//printf("%s %d %s\n", s.name, s.age, s.id);
//	struct Stu* ps = &s;
//	//printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).id);
//	printf("%s %d %s\n", ps->name, ps->age, ps->id);
//	return 0;
//}

//
//int main()
//{
//	;//�����
//	return 0;
//}
//
//int main()
//{
//	int age = 10;
//
//	if(age<18)
//	{
//		printf("������\n");
//		printf("����̸����\n");
//	}
//	else if(age>=18 && age<25)
//	{
//		printf("����\n");
//	}
//	else if(age>=25 && age<40)
//	{
//		printf("����\n");
//	}
//	else if(age >= 40 && age<80)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("�ϲ���\n");
//	}
//
//	/*if(age<18)
//	printf("δ����\n");
//	else
//	printf("����\n");*/
//
//	/*if(age<18)
//	printf("δ����\n");
//	*/
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int a=10;
//
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	char firstname[20];
//	char first_name[20];//2
//	char FirstName[20]; //3
//	char First_Name[20];
//
//	return 0;
//}
// 
// int main()
// {
// 	int num = 1;
// 	if(5 == num)
// 		printf("hehe\n");
// 
// 	return 0;
// }
//
//int  main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	/*for(i=1; i<=100; i++)
//	{
//		if(i%2 == 1)
//			printf("%d ", i);
//	}*/
//
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//
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
//
//	/*if(1 == day)
//	{
//	printf("����1\n");
//	}
//	else if(2 == day)
//	{
//	printf("����2\n");
//	}
//	*/
//	return 0;
//}
//
//int main()
//{
//	int day = 1;
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
//		case 2:	m++;n++;break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	//5 3
//	return 0;
//}

//
//int main()
//{
//// 	while(1)
//// 		printf("hehe\n");
//
//	int i = 0;
//	while(i<10)
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//
//int  main()
//{
//	//int ch = 0;
//	//while((ch=getchar()) != EOF)//end of file
//	//{
//	//	putchar(ch);
//	//}
//	char password[20] = {0};
//	int ch = 0;
//	printf("����������:");
//	scanf("%s", password);
//	while((ch=getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
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
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	//while(i<10)//�ж�
//	//{
//	//	printf("%d ", i);
//	//	i++;//����
//	//}
//
//	return 0;
//}
//
//int main()
//{
//	/*int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}*/
//	//int a = 10;
//	//int b = 20;
//	//printf("%p\n", &a);
//	//printf("%p\n", &b);
//	//
//	//<C�����ȱ��>
//	//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	if(i == 5)
//	//		printf("hehe\n");
//	//	i=0;
//	//}
//
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//	int a[6] = {0x6f796958, 0x694c2075, 0x2078756e, 0x756f7247, 0x30322070, 0};
//	//[58 69 79 6f 75 20 4c 69 6e 75 78 20 .....  70 20 32 30 00 00 00 00]
//	//88 105 ...
//	//Xiy                                               2 0  
//	printf("%d\n", printf("%s", (char *)a));
//	return 0; 
//}


// 
// int main()
// {
// 	int a = 0x11223344;
// 
// 	return 0;
// }

//
//int  main()
//{
//// 	for(;;)
//// 	{
//// 
//// 	}
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(;j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	do 
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//5
//	//1 2 6 =9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
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
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);//5
//	//1 2 6 =9
//	for(n=1; n<=3; n++)
//	{
//		ret = ret*n;
//		sum += ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
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
// int main()
// {
// 	char arr1[] = "welcome to bit!!!!!";
// 	char arr2[] = "###################";
// 	int sz = strlen(arr1);
// 	int left = 0;
// 	int right = sz-1;
// 
// 	while(left<=right)
// 	{
// 		arr2[left] = arr1[left];
// 		arr2[right] = arr1[right];
// 		printf("%s\n", arr2);
// 		Sleep(1000);
// 		system("cls");
// 		left++;
// 		right--;
// 	}
// 	printf("%s\n", arr2);
// 	return 0;
// }
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
//	}
//	if(i>=3)
//		printf("��¼ʧ��\n");
//	return 0;
//}
//
//#include <stdio.h>
//#include <windows.h>
//
//void SetPos(int x, int y)
//{
//	COORD pos = {0};
//	HANDLE hOutput = NULL;
//	pos.X = x;
//	pos.Y = y;
//	//��ȡ��׼����ľ��(������ʶ��ͬ�豸����ֵ)
//	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//���ñ�׼����Ϲ���λ��Ϊpos
//	SetConsoleCursorPosition(hOutput, pos);
//}
//							
//int main()
//{
//	int minute = 1;
//	int second = 1;
//
//	while((minute !=0) || (second != 0))
//	{
//		SetPos(40, 0);
//		if(second == 0)
//		{
//			if(second<10)
//			{
//				printf("%d:0%d\n", minute, second);
//			}
//			else
//			{
//				printf("%d:%d\n", minute, second);
//			}
//			minute--;
//			second = 59;
//		}
//		else
//		{
//			if(second<10)
//			{
//				printf("%d:0%d\n", minute, second);
//			}
//			else
//			{
//				printf("%d:%d\n", minute, second);
//			}
//			second--;
//		}
//		Sleep(1000);
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while(scanf("%d%d%d", &a, &b, &c))
	{
		if((a+b>c) && (a+c>b) && (b+c>a))
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	return 0;
}
