#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////在屏幕上输出菱形图案右半边
//int main()
//{
//	int i = 0;
//	int n = 0; //n是菱形上半部分的行数
//	int j = 0;
//	scanf("%d", &n);
//	//上半部分
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分比上半部分少1行
//	for (i = n-1; i >= 1; i--)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


////输出完整的菱形图案
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//上半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}	
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i <= line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{ 
//			printf(" ");
//		}
//		for (j = 0; j< 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



////求出0～999之间的所有“水仙花数”(三位数各个位的数字立方和恰好等于该数本身)
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		//计算i的位数-n
//		int n = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			n++;
//			tmp /= 10; //循环内部一定不要改变循环变量
//		}
//		//计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n); //pow为n次方
//			tmp /= 10;
//		}
//		//作比较
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
int main()
{
	int i = 0;
	int a = 0;
	scanf("%d", &a);
	int sum = 0;
	int tmp = a;
	for (i = 1; i <= 5; i++)
	{
		sum += tmp;
		tmp = 10*tmp+a;
	}
	printf("%d", sum);
	return 0;
}
