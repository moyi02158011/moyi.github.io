//#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("************\n  Welcome\n************");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("  A\nA   A\n  A");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("* * * *\n * * *\n  * *\n   *");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double cm,inch,foot,m;
//	scanf("%lf", &cm);
//	m = cm / 100.0;
//	foot = m / 0.3048;
//	inch = foot * 12;
//	foot = inch / 12;
//	inch = (int)inch% 12;
//	printf("%d %.0lf",(int)foot,inch);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double F, C;
//	scanf("%lf", &F);
//	C = 5 * (F - 32) / 9;
//	printf("Celsius = %d", (int)C);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double H;
//	scanf("%lf", &H);
//	printf("%.1lf", (H - 100) * 0.9*2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	unsigned a, b;
//	scanf("%u %u",&a,&b);
//	
//	printf("%u + %u = %u\n%u - %u = %u\n%u * %u = %u\n",a,b,a+b,a,b,a-b,a,b,a*b);
//	if (a % b == 0)
//		printf("%u / %u = %u\n", a, b, a / b);
//	else
//		printf("%u / %u = %.2f\n", a, b, 1.0 * a / b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int math = 87, eng = 72, comp = 93, average;
//	average = (math + eng + comp) / 3;
//	printf("math = 87, eng = 72, comp = 93, average = %d",average);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int D = 0;
//	scanf("%d", &D);
//	D = (D+2) % 7;
//	if (D == 0)
//	D+=7;
//	printf("%d", D);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int m = 0, n = 0, t = 0;
	scanf("%2d%2d %d", &m, &n, &t);
	if (t>=0)
	{
		if (n + t >= 60)
		{
			m = m + (n + t) / 60;
			n = (n + t) % 60;
		}
		else
		{
			m = m; n = n + t;
		}
	}
	else 
	{
		if (n + t >=0 )
		{
			m = m;
			n = (n + t);
		}
		else
		{
			if ((n + t) % -60 == 0)
			{
				m = -((n + t) / -60) + m;
				n = n;
			}
			else 
			{
				m = -((n + t) / -60) + m;
				n = (n+60 - (n + t) % -60);
			}
		}
	}
	printf("%02d%02d", m, n);
	return 0;
}