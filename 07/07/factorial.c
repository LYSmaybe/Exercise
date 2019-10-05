//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

////1.递归法
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("输入一个数，我们将计算它的阶乘：");
//	scanf("%d", &n);
//	ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}



////2.非递归法
//int factorial(int n)
//{
//	int i = 1;
//	int product = 1;
//	if (n <= 1)
//		return 1;
//	else
//	{
//		for (i = 1; i <= n; i++)
//		{
//			product *= i;
//		}
//		return product;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("输入一个数，我们将计算它的阶乘：");
//	scanf("%d", &n);
//	ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}