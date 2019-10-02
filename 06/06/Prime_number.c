#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Prime_number(int a)
{
	int i = 0;
	for (i = 2; i < a ; i++)
	{
		if (a%i == 0)
		{
			return 0;
		}	
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (Prime_number(n) == 0)
		printf("%d不是素数\n", n);
	else
		printf("%d是素数\n", n);
	return 0;
}