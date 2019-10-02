//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////都会改变数组内部的值，所以使用传址调用
//
//void Init(int* x,int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		int tmp = 0;
//		*x[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(&arr,sz);
//	return 0;
//}