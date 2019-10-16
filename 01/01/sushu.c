#include <stdio.h>
#include <math.h>
//判断100-200之间的素数：用2到(i-1)/2来除以i，以是否可以被整除来判断i是否为素数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200;i+=2) //i=100时i++;可优化
	{
		int flag = 1;//表示是素数
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) //j<i;j<=i-1;j<=(i-1)/2;j<=sqrt(i);可优化
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
			
		}
		//1.从break跳出,不需要记录；2.未执行break，从for循环条件跳出，此时所有j都试过，不能被整除，需要记录
		if (flag==1)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\ncount=%d\n", count);
	return 0;
}



////九九乘法表
//int main() 
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//每循环一次，打印一行
//		int j = 0;
//		for (j = 1; j <=i; j++)
//			printf("%d*%d=%-2d ", i, j, i*j);//等号后左对齐；%2d是右对齐
//		printf("\n");
//	}
//	return 0;
//}



////闰年判断：1.能被4整除且不可被100整除；2.可被400整除(两种方法不并列)
//int main() 
//{
//	int year = 0;
//	int count = 0;
//	int flag = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4==0)
//		{
//			if (year % 100!= 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}