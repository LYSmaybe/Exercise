#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_string(char* string,int sz)
{
	if (sz)
	{
		printf("%s", string);
		return reverse_string(string,sz-1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "abcdefg";
	int sz = sizeof(arr) / sizeof(arr[0]);
 	reverse_string(& arr,sz);
	return 0;
}