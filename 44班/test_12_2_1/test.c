#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//7%2
//7/2
//3%2
//1%2
//1/2
//111
//
//
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while(n)	
//	{
//		if(n%2==1)
//			count++;
//		n/=2;
//	}
//	return count;
//}

//15
//000000000000000000000000001111
//000000000000000000000000000001
//000000000000000000000000000001
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)	
//	{
//		if(1 == ((n>>i)&1))
//			count++;
//	}
//	return count;
//}

//
//int count_bit_one(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	//n = n&(n-1);
//	//1011-n
//	//1010-n-1
//	//1010-n
//	//1001-n-1
//	//1000-n
//	//0111-n-1
//	//0000-n
//	return count;
//}
//
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	
//	count = count_bit_one(n);
//
//	printf("count = %d\n", count);
//	return 0;
//}

//
//����
//�ַ���
//����������
//leetcode
//
//
//void print(int n)
//{
//	int i= 0;
//	//ż��λ
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	//����λ
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//00000000000000000000000000001010
//	//000000000000000011
//	//000000000000000000
//	//
//	print(n);
//
//	return 0;
//}
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int count_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	return count_bit_one(tmp);
//}
//
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int count = count_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}
// 
// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 	int c = 0;
// 	int d = 0;
// 	int e = 0;
// 	for(a=1; a<5; a++)
// 	{
// 		for(b=1; b<=5; b++)
// 		{
// 			for(c=1; c<=5; c++)
// 			{
// 				for(d=1; d<=5; d++)
// 				{
// 					for(e=1; e<=5; e++)
// 					{
// 						if(((b==2)+(a==3)==1)&&
// 						   ((b==2)+(e==4)==1)&&
// 						   ((c==1)+(d==2)==1)&&
// 						   ((c==5)+(d==3)==1)&&
// 						   ((e==4)+(a==1)==1))
// 						{
// 							if(a*b*c*d*e==120)
// 								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
// 						}
// 					}
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }

//
//int main()
//{
//	char killer = 0;
//	for(killer='a'; killer<='d'; killer++)
//	{
//		if((killer!='a')+
//		   (killer=='c')+
//		   (killer=='d')+
//		   (killer!='d')==3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//

//
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
//
// 
// int main()
// {
// 	int arr[10][10] = {0};
// 	int i = 0;
// 	int j = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		for(j=0; j<10; j++)
// 		{
// 			if(j==0)
// 				arr[i][j] = 1;
// 			if(i==j)
// 				arr[i][j] = 1;
// 			if(i>1 && j>0)
// 			{
// 				arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
// 			}
// 		}
// 	}
// 
// 	for(i=0; i<10; i++)
// 	{
// 		for(j=0; j<=i; j++)
// 		{
// 			printf("%3d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 
// 	return 0;
// }

//5
//101
//
#include <math.h>

//unsigned int reverse_bit(unsigned int n)
//{	
//	//00000000000000000000000000011001
//	//10011000000000000000000000000000
//	int i = 0;
//	unsigned int ret = 0;
//	for(i=0; i<32; i++)
//	{
//		ret += ((n>>i)&1)*pow(2, 31-i);
//	}
//	return ret;
//}
// unsigned int reverse_bit(unsigned int n)
// {	
// 	//00000000000000000000000000011001
// 	//
// 	int i = 0;
// 	unsigned int ret = 0;
// 	for(i=0; i<32; i++)
// 	{
// 		ret <<= 1;
// 		ret |= ((n>>i)&1);
// 	}
// 	return ret;
// }
// 
// int main()
// {
// 	unsigned int num = 0;
// 	unsigned int ret = 0;
// 
// 	scanf("%d", &num);
// 	ret = reverse_bit(num);
// 	printf("%u\n", ret);
// 
// 	return 0;
// }
//
// int main()
// {
// 	int a = 11;
// 	int b = 21;
// 	//01011
// 	//10101
// 	//00001
// 	//int c = (a+b)/2;
// 	//int c = a+(b-a)/2;
// 	//int c = a+((b-a)>>1);
// 
// 	//int c = (a&b) + ((a^b)>>1);
// 
// 	printf("c = %d\n", c);
// 	return 0;
// }
// 

// 
// int main()
// {
// 	int arr[] = {1,2,3,4,5,4,3,2,1};
// 	int i = 0;
// 	int tmp = 0;
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(i=0; i<sz; i++)
// 	{
// 		tmp ^= arr[i];
// 	}
// 	printf("%d\n", tmp);
// 	return 0;
// }
// 
// 1 2 3 4 5 1 2 3 4 6
//
//����
//
//
//#include <assert.h>
//
//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char*left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_str(char*str)
//{
//	int len = 0;
//	assert(str != NULL);
//
//	//1. ���������ַ���
//	len = my_strlen(str);
//	reverse(str, str+len-1);
//
//	//2. ����ÿ������
//	//hello world
//	while(*str != '\0')
//	{
//		char* start = str;
//		char* end = NULL;
//		while((*str != ' ') && (*str!='\0'))
//		{
//			str++;
//		}
//		end = str-1;
//		reverse(start, end);
//		if(*str == ' ')
//			str++;
//	}
//}
//
//int main()
//{
//	char arr[] = "student a am i";
//	//i am a student
//	//i ma a tneduts
//	//hello world
//
//	//i am a student
//	
//	//
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//void move_arr(int arr[], int sz)
//{
//	//�������ٶ�
//	int tmp = 0;
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		//����ҵ�һ��ż��
//		while((left<right) && (arr[left] %2==1))
//		{
//			left++;
//		}
//		//�ұ���һ������
//		while((left<right) && (arr[right]%2==0))
//		{
//			right--;
//		}
//		//����Ԫ��
//		if(left<right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//
//	move_arr(arr, sz);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void Find(int arr[3][3], int *px, int *py, int k)
//{
//	int x = 0;
//	int y = *py-1;
//	while(x<*px && y>=0)
//	{
//		if(arr[x][y] == k)
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//		else if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			x++;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int x = 3;
//	int y = 3;
//
//	//�����Ͳ���
//	Find(arr, &x, &y, 7);
//	if(x==-1 && y==-1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���:%d %d\n", x, y);
//	}
//	//
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	//
//
//	return 0;
//}

#include<string.h>

//�������
//void left_move(char *str, int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(str);
//	k = k%len;
//	for(i=0; i<k; i++)
//	{
//		//�����һ���ַ�
//		char tmp = *str;
//		//�ƶ���ߵ��ַ�
//		for(j=0; j<len-1; j++)
//		{
//			*(str+j) = *(str+j+1);
//		}
//		//�ѱ���õĵ�һ�����ݷŵ����
//		*(str+len-1) = tmp;
//	}
//}
#include <string.h>
#include <assert.h>


void reverse(char*left, char*right)
{
	assert(left != NULL);
	assert(right != NULL);

	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


//
////ab cdef
////bafedc
////cdefab
//int main()
//{
//	char arr[] = "abcdef";
//	//cdefab
//	left_move(arr, 14);
//	printf("%s\n", arr);
//	return 0;
//}

//������ת��
//void left_move(char *str, int k)
//{
//	int len = strlen(str);
//	k %= len;
//	reverse(str, str+k-1);
//	reverse(str+k, str+len-1);
//	reverse(str, str+len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	char *p = "cdefabq";
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0; i<len-1; i++)
//	{
//		left_move(arr, 1);
//		if(strcmp(p, arr) == 0)
//		{
//			printf("��\n");
//			break;
//		}
//	}
//	if(i == len-1)
//	{
//		printf("����\n");
//	}
//	return 0;
//}


 //int is_left_move(char* str1, char *str2)
 //{
	//int len1 = strlen(str1);
	//int len2 = strlen(str2);
 //	assert(str1 != NULL);
 //	assert(str2 != NULL);
	//if(len1 != len2)
	//	return 0;

 //	//1. ׷��str1
	//strncat(str1, str1, len1);
	////2. �ж�str2�Ƿ�Ϊstr1�����ַ���
	//return !(NULL == strstr(str1, str2));
 //}
 //
 //int main()
 //{
 //	char arr[20] = "abcdef";
 //	char *p = "ab";
 //	int len = strlen(arr);
 //	//"abcdefabcdef";
 //	if(is_left_move(arr, p) == 1)
 //	{
 //		printf("��\n");
 //	}
 //	else
 //	{
 //		printf("����\n");
 //	}
 //	return 0;
 //}
// 
// #include <string.h>
// 
// int main()
// {
// 	char arr[20] = "hello";
// 	strncat(arr, arr, 5);
// 	printf("%s\n", arr);
// 	return 0;
// }