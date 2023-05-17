#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main2() {

	/* 
	数据类型 给变量分配一个合适的内存空间
	
	1
	整型		short、			int、			long、			long long
	占用空间	2字节、			4字节、			4字节、			8字节
	取值范围  (-2^15-2^15-1)  (-2^31-2^31-1)	(-2^31-2^31-1)	(-2^63-2^63-1)


	2
	实型    单精度 float	4字节	双精度 double 8字节
					

	3
	字符型 char 1字节 存储ASCII码；


	4
	sizeof 统计数据类型所占的内存大小
	sizeof（数据类型/变量）

	5
	转义字符
	\a \b \\ \f \n \r \t \\ \' \" \? ...


	6 
	字符串
	char 变量名[] = "";
	string 变量名 = "";


	7 布尔类型 bool; 1字节
	  true 1 false 2;
	
	8数据输入 cin >>  ;


	*/

	cout << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << " " << sizeof(long long) << " " << endl;
	cout << sizeof(float) << " " << sizeof(double) << " " << endl;
	int a;
	scanf("%d", &a);
	
	system("pause");

	return 0;
}