#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////����Ļ���������ͼ���Ұ��
//int main()
//{
//	int i = 0;
//	int n = 0; //n�������ϰ벿�ֵ�����
//	int j = 0;
//	scanf("%d", &n);
//	//�ϰ벿��
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿�ֱ��ϰ벿����1��
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


////�������������ͼ��
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//�ϰ벿��
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
//	//�°벿��
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



////���0��999֮������С�ˮ�ɻ�����(��λ������λ������������ǡ�õ��ڸ�������)
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		//����i��λ��-n
//		int n = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			n++;
//			tmp /= 10; //ѭ���ڲ�һ����Ҫ�ı�ѭ������
//		}
//		//����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n); //powΪn�η�
//			tmp /= 10;
//		}
//		//���Ƚ�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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
