#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////������������ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;//tmp��ʾ��ʱ����
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
////��������ʱ������������������ֵ
////1.���üӼ����������������ֵ����ӷ����ܻ���������
////2.������������(��Ӧ��������ͬΪ0������Ϊ1����������������Ч�ʵͣ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	a = a + b;//a=a^b;  a�д�������
//	b = a - b;//b=a^b;  ������b���õ�a������b
//	a = a - b;//a=a^b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//
//
//// ��10���������ֵ
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���ֽڳ���Ԫ�ص��ֽ�
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];//max��Ҫ��ʼ���������ֵΪ0
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
////���������Ӵ�С���,Ϊ�˱���������࣬���Խ�����ֵд��һ������
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
////�����������Լ��
////��С��������a*b��/���Լ��
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