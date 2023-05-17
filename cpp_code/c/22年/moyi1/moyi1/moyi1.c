#include <stdio.h>

int main(void)
{
	unsigned char x = 0;
	unsigned char sx = 0;
	printf(“请输入一个一字节的整数：”)；
	scanf("%hhd", &x);
	sx = 256 - x;
	printf(“ % hhd求负后等于 % hhd”, x, sx);
    return 0
}