#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//主函数-程序的入口
//int main()
//{
//	//printf-输入输出的库函数
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	//暂停
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//
//	//int c = (a+b)/2;
//	int c = a + (b-a)/2;
//
//	printf("c = %d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);//20
//	total = money*2-1;
//
//	/*total = money;
//	empty = money;
//
//	while(empty>=2)
//	{
//	total = total + empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}
//
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机!\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)//string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
