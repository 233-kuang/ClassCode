#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע��,��ĵ��Խ�����1���Ӻ�ػ�,�������[������],�Ǿ�ȡ���ػ�\n");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)//strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}




	return 0;
}
// 
// int main()
// {
// 	int a = 2147483646;
// 	int b = 2147483646;
// 
// 	//int c = a/2+b/2;
// 	//int c = (a+b)/2;
// 	//int c = (a-b)/2+a;
// 
// 	printf("%d\n", c);
// 	return 0;
// }
// int main()
// {
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 
// 	return 0;
// }