#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////计算n的阶乘
//int main()
//{
//	int i;
//	int n = 0;
//	int ret = 1;
//	printf("请输入n的值：", n);
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("阶乘结果=%d", ret);
//	return 0;
//}



//计算1到10的阶乘和,高效率
int main()
{
	int i;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("sum=%d\n",sum);
	return 0;
}