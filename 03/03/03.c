#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
////左值为空间，右值为内容
////数组创建好之后大小固定
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}



////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
////方法一
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//将判断正负号和计算sum结果分为两个分支，一起执行
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


////方法二
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		//因为符号只有两种变化，用flag来产生交替变化
//		sum += (1.0 / i) * flag;
//		flag = -flag; //由于在模块内flag会发生值的变化，所以flag的定义放在模块之外不容易出错
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//1到 100 的所有整数中出现多少次数字9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i / 10 == 9)
			count++;
		if (i % 10 == 9)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}