#include <stdio.h>
#include <math.h>
//�ж�100-200֮�����������2��(i-1)/2������i�����Ƿ���Ա��������ж�i�Ƿ�Ϊ����
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200;i+=2) //i=100ʱi++;���Ż�
	{
		int flag = 1;//��ʾ������
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) //j<i;j<=i-1;j<=(i-1)/2;j<=sqrt(i);���Ż�
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
			
		}
		//1.��break����,����Ҫ��¼��2.δִ��break����forѭ��������������ʱ����j���Թ������ܱ���������Ҫ��¼
		if (flag==1)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\ncount=%d\n", count);
	return 0;
}



////�žų˷���
//int main() 
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿѭ��һ�Σ���ӡһ��
//		int j = 0;
//		for (j = 1; j <=i; j++)
//			printf("%d*%d=%-2d ", i, j, i*j);//�Ⱥź�����룻%2d���Ҷ���
//		printf("\n");
//	}
//	return 0;
//}



////�����жϣ�1.�ܱ�4�����Ҳ��ɱ�100������2.�ɱ�400����(���ַ���������)
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