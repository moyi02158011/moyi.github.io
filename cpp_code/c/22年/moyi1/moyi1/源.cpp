#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
////{
////	unsigned char x = 0;
////	unsigned char sx = 0;
////	printf("������һ��һ�ֽڵ�������");
////	scanf("%hhd", &x);
////	sx = 256 - x;
////	printf("%hhd �������= %hhd", x, sx);
////	return 0;
//
//
////da ying  printf �⺯�� ����Ļ�ϴ�ӡ  ����ͷ�ļ�
//{
//	printf("wtf\n");
//	return 0;
//}
//���� ���� ����-ctrl+f5�����-��ʼִ�в�����


//��������
//���������-д����-�������
//��������
//����-��Ʒ���۸�-С��
//С��---������ float
//���� ����---����
//char-�ַ���������
//short-������
//int-����
//long-������
//long long-��������
//float-�����ȸ�����
//double-˫���ȸ�����
//int main(void)
//{
//	char ch = 'a';
//	int age = 20;
//	short num = 10;
//	float weight = 55.5;
//	return 0
//}
//�о����ʹ�С
//int main(void)
//{
//	printf("%d", 100\n);//��ӡһ������-%d
//	//sizeof -�ؼ���-�������ͻ������ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(char));//1--------������еĵ�λ-�����ʶ�������
//	printf("%d\n", sizeof(short));//2--------bit-����λ  byte-�ֽ�=8bit  kb=1024byte  mb=1024kb  gb=1024md  tb=1024gb  pb=1024tb
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//����-���ܸı����
// ����-�ܸı����
// �����������������+���� int age
// ���Ը�������ֵ age=10
// 
//int main()
//{
//	int age = 20;
//	double weight = 55.5;
//	return  0;
//}
//
////�ֲ�������ȫ�ֱ���
//int a = 100;//ȫ�ֱ���
//int main()
// {
//	int a= 10��//�ֲ�����
//
//
//
//}//��ȫ�ֱ�����ȫ�ֱ������ֳ�ͻʱ���ֲ����ȣ�������д��һ��
//

////��2��������
////scanf ���뺯��{
//int main()
//{
//	printf("������2������:");
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);
//	int sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//���������������
//������ ������ʹ�÷�Χ  
//�ֲ��������������Ǳ������ھֲ���Χ
//ȫ�ֱ��������������������� ���������������Դ�ļ���ֻҪ��extern�����ͺ�
//
//�������ڣ���������������ָ���Ǳ����Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ�������ڿ�ʼ���������Χ���ڽ�����
//ȫ�ֱ������������ڣ�������������ڡ�


//������
//int main()
//{//1.���泣����1��2����a����
//  //2.const���εĳ���������const���εı��������޸ģ�����Ϊ������
//	//const int a = 1;
////3.#define ����ı�ʶ������
//	//ö�ٳ���
//	//����һһ�оٵĳ������ǳ���Ĭ�ϴ�0��ʼ
//	enum Sex
//	return 0;
//}

//�ַ���+ת���ַ�+ע��
//�ӡ��������ַ���
//�ַ�����-������һ��ͬ���͵�Ԫ��
//�ַ����ڽ�β��λ������һ��\0���ַ�
//���ַ�������strlen
//#include <string.h>
//int main()
//{
//	char arr[] = "hello";
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%s\n", arr);
//
//	return 0;
//}
//ת���ַ� ת������ԭ������˼
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100; a++)
//
//		if (a % 2 != 0)
//
//
//			printf("%d ", a);
//
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//
//double r1 = 0.0414, r2 = 0.0468, r3 = 0.054, r5 = 0.0585;//rnΪn�궨�ڵ���Ϣ
//double i = 1000;//����
//int main()
//{
//	int n;
//	//1.һ�δ�������
//	n = 5;
//	double  P1 = i * (1 + r5 * n);
//	printf("һ�δ������ڱ�Ϣ��=%lf\n\n", P1);
//
//	//�ȴ������ڣ��ٴ�3����
//	n = 2;
//	double P21 = i * (1 + r2 * n);
//	n = 3;
//	double P2 = P21 * (1 + r3 * n);
//	printf("�ȴ������ڣ��ٴ�3���ڱ�Ϣ��=%lf\n\n", P2);
//
//	//��5��һ����
//	n = 5;
//	double P5 = i * (pow(1 + r1, n));
//	printf("��5��һ���ڣ���Ϣ��=%lf\n\n", P5);
//
//	
//	return 0;
//}


//����һ
//int main()
//{
//	int a;
//	double b;
//	char c;
//	printf("��ֱ���������С���ַ����м��ÿո����\n");
//
//	scanf("%d %lf %c", &a, &b, &c);
//	printf("%d %lf %c", a, b, c);
//	return 0;
//}

////�����
//int main()
//{
//	int x = 15, y = 016, z = 0x101;
//	char c1 = 'a', c2 = 'f', c3 = '\,', c4 = 'h',c;
//	printf("%d %o %x\n", x, y, z);
//	printf("%d %d %d\n", x, y, z);
//	printf("%c %c %c %c\n", c1, c2, c3, c4);
//	printf("%c %c %c %c\n", c1, c2, c3, c4);
//	printf("%d %d %d %d\n", c1, c2, c3, c4);
//	c = c1 + 32;
//	printf("%c\n", c);
//	return 0;
//}


////������
//int main()
//{
//	float grade1=0, grade2=0, grade3=0, sum;
//	
//	printf("�������һ��ѧ���ĳɼ�\n");
//	scanf("%f %f %f", &grade1, &grade2, &grade3); 
//	sum = grade1 + grade2 + grade3;
//	printf("��һ��ѧ�����ܷ�Ϊsum=%f\n\n", sum);
//
//	printf("������ڶ���ѧ���ĳɼ�\n");
//	scanf("%f %f %f", &grade1, &grade2, &grade3);
//	sum = grade1 + grade2 + grade3;
//	printf("�ڶ���ѧ�����ܷ�Ϊsum=%f\n\n", sum);
//
//	printf("�����������ѧ���ĳɼ�\n");
//	scanf("%f %f %f", &grade1, &grade2, &grade3);
//	sum = grade1 + grade2 + grade3;
//	printf("������ѧ�����ܷ�Ϊsum=%f\n", sum);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//��ֹ
//			continue;//��������Ĵ���Ȼ������for
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//    int line = 0;
//    while (line < 100000)
//    {
//        printf("д���룺%d\n", line);
//        line++;
//    }
//    if (line == 100000)
//    {
//        printf("good\n");
//    }
//    return 0;
//}
//int main()
//{
//	int a = 2, b = 3;
//	float x = 3.9, y = 2.3;
//	float result = 0;
//	result = (float)(a + b) / 2 + (int)x % (int)y;
//	printf("%f", result);
//	return 0;
//}





//int main()
//{
//	int x;
//	printf("����x��ֵ:");
//	scanf("%d", &x);
//	printf("���ʽ(x>0)��ֵ:%d\n", x > 0);
//	printf("���ʽ(x>=-20&&x<=-10)��ֵ:%d\n", x >= -20 && x <= -10);
//	printf("���ʽ(x>100||x<10)��ֵ:%d\n", x > 100 || x < 10);
//	printf("���ʽ(x>20&&x/3==0)��ֵ:%d\n", x > 20 && x / 3 == 0);
//	printf("���ʽ((x%5==0)&&(x%3!=0))��ֵ:%d", (x % 5 == 0) && (x % 3 != 0));
//	return 0;
//}
//int main()
//{
//	int i=1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//
//	return 0;
//}
//int main()
//{
//	int i = 1, j = 1, a = 0, b = 0, n = 0;
//	scanf("%d\n", &n);
//	for (i, i<+n,i++)
//	{
//		for (b=i,b>=1,b--) 
//		{
//			j=j*b
//		}
//		a = a + j;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int a = 2, b = 3;
//	float x = 3.9, y = 2.3;
//	float result = 0;
//	result = (float)(a + b) / 2 + (int)x % (int)y;
//	printf("%f", result);
//	return 0;
//}
// 
//int main()
//{
//	int number;
//	int a, b, c;
//	printf("������һ����λ����");
//	scanf("%d", &number);
//	a = number / 100;
//	b = number % 100 / 10;
//	c = number % 100%10;
//	printf("%d��λ�����ǣ�%d��ʮλ�����ǣ�%d����λ�����ǣ�%d\n", number, c, b, a);
//
//	return 0;
//}
//int main()
//{
//	int x;
//	printf("������x��ֵ��");
//	scanf("%d", &x);
//	printf("���ʽ(x>0)��ֵ��%d\n", x > 0);
//	printf("���ʽ(x>=-20&&x<=-10)��ֵ��%d\n", x >= -20 && x < +-10);
//	printf("���ʽ(x>100||x<10)��ֵ��%d\n", x > 100 || x < 10);
//	printf("���ʽ(x>20&&x%3==10)��ֵ��%d\n", x > 20 && x % 3 == 10);
//	printf("���ʽ((x%5==0)&&(x%3!=0))��ֵ��%d\n", (x % 5 == 0) && (x % 3 != 0));
//	return 0;
//}
//int main()
//{
//	int a, b;
//	printf("�������һ��ѧ���ĳɼ���");
//	scanf("%d", &a);
//	printf("������ڶ���ѧ���ĳɼ���");
//	scanf("%d", &b);
//	printf("a��[0,100]��%d\n", a >= 0 && a <= 100);
//	printf("b��[0,100]��%d\n", b >= 0 && b <= 100);
//	printf("a>b?%d\n", a > b);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	printf("�����룺");
//	scanf("%d", &a);
//	printf("�����룺");
//	scanf("%d", &b);
//	if (a>b)
//	printf("���нϴ����%d",a);
//	else
//	printf("���нϴ����%d",b);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a, b, c;
//	printf("������")
//	scanf("a=%d", &a);
//	scanf("b=%d", &b);
//	c = MAX(a, b);
//	printf("����%d�Ƚϴ�",c);
//	return 0;
//}
//int main()
//����һ���ַ���Сд��ĸת���ɴ�д������Ǵ�д��תСд�����������ĸֱ�������
//int main()
//{
//	char v;
//	printf("������һ���ַ�:");
//	scanf("%c", &v);
//	if (v >= 'a' && v <= 'z')
//	{
//		v = v + 'A' - 'a';
//		printf("�������һ��Сд��ĸ���Ĵ�д��%c", v);
//
//	}
//	else if (v >= 'A' && v <= 'Z')
//	{
//		v = v - 'A' + 'a';
//		printf("�������һ����д��ĸ����Сд��%c", v);
//	}
//	else
//		printf("����Ĳ�����ĸ");
//	return 0;
//}


//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//
//���ݷ�Χ��1 \le n \le 100 \1��n��100  �� �ɼ�ʹ�ðٷ����Ҳ����ܳ��ָ���
//����������
//���У�
//
//��1�У�������n��1��n��100��
//
//��2�У�n�Ƴɼ�����Χ0.0~100.0�����ÿո�ָ���
//���������
//���һ�У��������������ֱ��ʾ����߷֣���ͷ��Լ�ƽ���֣�С�������2λ�����ÿո�ָ���
//int main() {
//    int n;
//    float min, max, m = 0;
//
//    min = 100; max = 0;
//    scanf("%d", &n);
//    float arr[n];
//    for (int i = 0; i < n; i++)
//        scanf("%f", &arr[i]);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//        else
//            max = max;
//        if (arr[i] < min)min = arr[i]; else min = min;
//        m += arr[i];
//    }
//    m = m / n;
//    printf("%.2f %.2f %.2f", max, min, m);
//    return 0;
//}
//int main()
//{
//    int n, t = 2;
//    scanf("%d", &n);
//    for (int i = n; i > 12;)
//    {
//        t += 4;
//        i = i - 12;
//    }
//    printf("%d", t);
//    return 0;
//}

//����������
//ÿ�������������������n��m��(1 �� n �� 109��1 �� m �� 109)
//
//���������
//����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�
//
//int main() {
//    long long n, m, x, y, i, j;
//    scanf("%lld %lld", &n, &m);
//    i = m > n ? n : m; j = m > n ? m : n;
//    while (i && j)//�����Լ�� շת���
//    {
//        j = j % i;
//        if (j == 0 || i == 0)break;
//        i = i % j;
//    }
//    x = i == 0 ? j : i;
//    y = m * n / x;//����С������==�������������Լ��
//    printf("%lld", x + y);
//    return 0;
//}
//#include <math.h>
//int main() {
//    int n, a, b=0, i, j,c=1;
//    scanf("%d", &n);
//    for(j=n,j>10,j/=10)
//        c++
//    char arr[c];
//    for (n = n; n > 10; n /= 10)
//    {
//        for (i = n; i > 10; i /= 10)
//        {
//            a = i;
//        }
//        arr[b] = 'a';
//        b++;
//    }
//    while (b >= 0)
//    {
//        printf("%c", arr[b]);
//        b--;
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int grade = -1;
//	char gradeLevel = '0';
//	printf("������ɼ�(0-100):");
//	scanf("%d", &grade);
//	if (grade >= 0 && grade < 60)
//		gradeLevel = 'E';
//	else if (grade >= 60 && grade < 70)
//		gradeLevel = 'D';
//	else if (grade >= 70 && grade < 80)
//		gradeLevel = 'C';
//	else if (grade >= 80 && grade < 90)
//		gradeLevel = 'B';
//	else
//		gradeLevel = 'A';
//	printf("�ɼ� %d�ĵȼ��� %c", grade, gradeLevel);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int grade = -1,d10=-1;
//	char gradeLevel = '0';
//	printf("������ɼ�(0-100):");
//	scanf("%d", &grade);
//	d10 = grade / 10;
//	switch(d10) {
//		case 10:
//		case 9:gradeLevel = 'A'; break;
//		case 8:gradeLevel = 'B'; break;
//		case 7:
//		case 6:
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:gradeLevel = 'E'; break;
//	}
//	printf("�ɼ� %d�ĵȼ��� %c", grade, gradeLevel);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double result = 1.0;
//	int n = 1,i=1;
//	printf("������׳��е�n��1-100����");
//	scanf("%d", &n);
//	if(n>=1&&n<=100)
//		for (i;i <= n; i++)
//		{
//			result = result * i;
//		}
//	printf("%d�Ľ׳���%.0lf", n, result);
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = '0';
//	int u = 0, l = 0, d = 0;
//	printf("������һ���ַ������س�������");
//	while (ch != '\n')
//	{
//		ch = getchar();
//		if (ch >= 'a' && ch <= 'z')
//			l++;
//		if (ch >= 'A' && ch <= 'Z')
//			u++;
//		if(ch >= '1' && ch <= '9')
//			d++;
//	}
//	printf("��д��ĸ������%d\nСд��ĸ������%d\n�����ַ�������%d\nSo Easy!!!", u, l, d);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	unsigned a, b;
//	scanf("%u %u", &a, &b);
//	if (b != 0)
//	{
//		printf("%u + %u = %u\n%u - %u = %u\n%u * %u = %u\n", a, b, a + b, a, b, a - b, a, b, a * b);
//		if (a % b == 0)
//			printf("%u / %u = %u\n", a, b, a / b);
//		else
//			printf("%u / %u = %.2f\n", a, b, 1.0 * a / b);
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        
//        if (a >= 60)
//            printf("Pass");
//        else
//            printf("Fail");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        scanf("%d", &a);
//        if (a >= 140)
//            printf("Genius");
//    }
//    return 0;
//}

//int main() {
//    char a;
//    while (scanf("%c", &a) != EOF) {
//        getchar();
//        if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
//            printf("Vowel\n");
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}

int main() {
	int n, m, k = 0;
	scanf("%d %d", &n, &m);
	int arr[10000][10000];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m; j++)
		{

			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == 1)
			{
				k++; break;
			}
		}
	}
	if (k == n - 1)
		printf("YES");
	else
		printf("NO");
	return 0;

}