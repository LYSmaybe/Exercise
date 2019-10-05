#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_string(char* str,int sz)
{
	if (sz)
	{
		printf("%s", str+sz);
		reverse_string(str,sz-1);
	}
}

int main()
{
	char arr[] = "abcdefg";
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	reverse_string(arr, sz);
	return 0;
}