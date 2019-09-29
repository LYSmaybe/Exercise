#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////交换两个数的值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;//tmp表示临时变量
//	printf("a=%d,b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//
//
////不创建临时变量，交换两个数的值
////1.利用加减调换（整型有最大值概念，加法可能会产生溢出）
////2.利用异或操作符(对应二进制相同为0，相异为1；不会产生溢出，但效率低）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	a = a + b;//a=a^b;  a中存入密码
//	b = a - b;//b=a^b;  密码与b异或得到a，放入b
//	a = a - b;//a=a^b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//
//
//// 求10个数中最大值
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//总字节除以元素的字节
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];//max需要初始化，否则初值为0
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//
//
//
////将三个数从大到小输出,为了避免代码冗余，可以将交换值写成一个函数
//int main()
//{
//	int a = 7;
//	int b = 99;
//	int c = 85;
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
//
//
////求两个数最大公约数
////最小公倍数：a*b再/最大公约数
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}