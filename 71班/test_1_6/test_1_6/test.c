#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	//ʵ���ַ�������
//	char *left = str;
//	char *right = str+len-1;
//
//	while(left<right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str+len-1);
//	*(str+len-1) = '\0';
//	if(strlen(str+1) >= 2)
//		reverse_string(str+1);
//	*(str+len-1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//
//	ʵ�ֺ��� init() ��ʼ������Ϊȫ0
//	ʵ�� print()  ��ӡ�����ÿ��Ԫ��
//	ʵ�� reverse()   �����������Ԫ�ص����á�
//	Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);//��ӡ
//	Init(arr, sz);//��ʼ������0
//	Print(arr, sz);//��ӡ
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//
//int  main()
//{
//	int a = 13;
//	int i = 0;
//	//����λ
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (a>>i)&1);
//	}
//	printf("\n");
//	//ż��λ
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (a>>i)&1);
//	}
//	printf("\n");
//	//00000000000000000000000000001101
//	//0000000000000011
//	//0000000000000010
//	//
//	return 0;
//}
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);//
//		count++;
//	}
//	return count;
//}
//
//int count_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	return count_one_bit(tmp);
//}
//
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int count = count_diff_bit(m, n);
//	
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//��������ɴ���
//	int *p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	short *p = (short*)arr;
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*(p+i) = 0;
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϲ���
//	for(i=0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�²���
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	//1
//
//	for(i=0; i<=100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. i�Ǽ�λ��
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while(tmp/10)
//		{
//			n++;
//			tmp/=10;
//		}
//		//2. i��ÿһλ��λ���η���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, n);
//			tmp/=10;
//		}
//		//3. �ж�
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;//2 22 222
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//1. ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	if(money>0)
//		total = money*2-1;
//
//	//total = money;//20
//	//empty = money;//20
//	////�û�
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2+empty%2;
//	//}
//	printf("total = %d\n", total);
//
//	return 0;
//}
//

//1. ��������ʹ����ȫ����λ��ż��ǰ�档

void SwapArr(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while(left<right)
	{
		while((left<right) && (arr[left]%2==1))
		{
			left++;
		}
		//
		while((left<right) && (arr[right]%2==0))
		{
			right--;
		}
		//
		if(left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};//
	int sz = sizeof(arr)/sizeof(arr[0]);
	SwapArr(arr, sz);
	PrintArr(arr, sz);
	return 0;
}

