#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//程序进入死循环

int main()
{
flag:
	printf("hehe\n");
	goto flag;
	return 0;
}