#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////����n�Ľ׳�
//int main()
//{
//	int i;
//	int n = 0;
//	int ret = 1;
//	printf("������n��ֵ��", n);
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("�׳˽��=%d", ret);
//	return 0;
//}



//����1��10�Ľ׳˺�,��Ч��
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