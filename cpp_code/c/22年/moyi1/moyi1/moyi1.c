#include <stdio.h>

int main(void)
{
	unsigned char x = 0;
	unsigned char sx = 0;
	printf(��������һ��һ�ֽڵ���������)��
	scanf("%hhd", &x);
	sx = 256 - x;
	printf(�� % hhd�󸺺���� % hhd��, x, sx);
    return 0
}