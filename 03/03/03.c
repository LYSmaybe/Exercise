#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////������A�е����ݺ�����B�е����ݽ��н�����������һ����
////��ֵΪ�ռ䣬��ֵΪ����
////���鴴����֮���С�̶�
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



////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
////����һ
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//���ж������źͼ���sum�����Ϊ������֧��һ��ִ��
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


////������
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		//��Ϊ����ֻ�����ֱ仯����flag����������仯
//		sum += (1.0 / i) * flag;
//		flag = -flag; //������ģ����flag�ᷢ��ֵ�ı仯������flag�Ķ������ģ��֮�ⲻ���׳���
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//1�� 100 �����������г��ֶ��ٴ�����9
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