#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main2() {

	/* 
	�������� ����������һ�����ʵ��ڴ�ռ�
	
	1
	����		short��			int��			long��			long long
	ռ�ÿռ�	2�ֽڡ�			4�ֽڡ�			4�ֽڡ�			8�ֽ�
	ȡֵ��Χ  (-2^15-2^15-1)  (-2^31-2^31-1)	(-2^31-2^31-1)	(-2^63-2^63-1)


	2
	ʵ��    ������ float	4�ֽ�	˫���� double 8�ֽ�
					

	3
	�ַ��� char 1�ֽ� �洢ASCII�룻


	4
	sizeof ͳ������������ռ���ڴ��С
	sizeof����������/������

	5
	ת���ַ�
	\a \b \\ \f \n \r \t \\ \' \" \? ...


	6 
	�ַ���
	char ������[] = "";
	string ������ = "";


	7 �������� bool; 1�ֽ�
	  true 1 false 2;
	
	8�������� cin >>  ;


	*/

	cout << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << " " << sizeof(long long) << " " << endl;
	cout << sizeof(float) << " " << sizeof(double) << " " << endl;
	int a;
	scanf("%d", &a);
	
	system("pause");

	return 0;
}