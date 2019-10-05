//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

////1.�ݹ鷨
//int Strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else return 1 + Strlen(str + 1);
//}
//
//int main()
//{
//	char* p = "abcedf";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}



////2.�ǵݹ鷨
//int Strlen(const char* str)
//{
//	int i = 0;
//	while (*str != '\0')
//	{
//		i++;
//		str++;
//	}
//	return i;
//}
//
//int main()
//{
//	char* p = "abcedf";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}