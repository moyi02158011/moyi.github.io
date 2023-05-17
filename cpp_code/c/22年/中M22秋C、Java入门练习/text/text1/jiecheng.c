#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int jiecheng(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * jiecheng(n - 1);
	return 0;
}