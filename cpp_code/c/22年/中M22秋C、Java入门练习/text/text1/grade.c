#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char getGradeLeve(int grade)
{
	char a;
	switch (grade / 10)
	{
	    case 10:a = 'A'; break;
		case 9:a = 'A'; break;
		case 8:a = 'B'; break;
		case 7:a = 'C'; break;
		case 6:a = 'D'; break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:a = 'E'; break;
		default: a= '0';

	}
	return a;
}