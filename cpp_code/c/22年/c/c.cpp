// c.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stdio.h>
#include<math.h>


////习题2.1
//int main()
//{
//	float r,P;
//	int n;
//	r = 0.1;
//	n = 10;
//	P=pow(1 + r, n);
//	printf("P=%f", P);
//	return 0;
//}

//习题2.2

double r1 = 0.0414, r2 = 0.0468, r3 = 0.054, r5 = 0.0585;//rn为n年定期的利息
double i = 1000;//本金
int main()
{
	int n;
	//1.一次存五年期
	n = 5;
	double  P1 = i * (1 + r5 * n);
	printf("一次存五年期本息和=%lf\n\n",P1);
	
	//先存两年期，再存3年期
	n = 2;
	double P21 = i * (1 + r2 * n);
	n = 3;
	double P2 = P21 * (1 + r3 * n);
	printf("先存两年期，再存3年期本息和=%lf\n\n", P2);

	//存5次一年期
	n = 5;
	double P5 = i * (pow(1+r1, n));
	printf("存5次一年期，本息和=%llf\n\n", P5);

	return 0;
}
