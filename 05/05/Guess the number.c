//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
////����Ҫ����һ�ε�ѭ������do while
//
//void menu()
//{
//	printf("********************\n");
//	printf("***   1.  play   ***\n");
//	printf("***   0.  exit   ***\n");
//	printf("********************\n");
//}
//
//void game()
//{
//	//�������ֵ
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ���
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}