#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
////{
////	unsigned char x = 0;
////	unsigned char sx = 0;
////	printf("请输入一个一字节的整数：");
////	scanf("%hhd", &x);
////	sx = 256 - x;
////	printf("%hhd 求负运算后= %hhd", x, sx);
////	return 0;
//
//
////da ying  printf 库函数 在屏幕上打印  引用头文件
//{
//	printf("wtf\n");
//	return 0;
//}
//编译 链接 运行-ctrl+f5或调试-开始执行不调试


//数据类型
//计算机语言-写程序-解决问题
//描述问题
//购物-商品，价格-小数
//小数---浮点型 float
//年龄 整数---整型
//char-字符数据类型
//short-短整型
//int-整型
//long-长整型
//long long-更长整型
//float-单精度浮点型
//double-双精度浮点型
//int main(void)
//{
//	char ch = 'a';
//	int age = 20;
//	short num = 10;
//	float weight = 55.5;
//	return 0
//}
//研究类型大小
//int main(void)
//{
//	printf("%d", 100\n);//打印一个整数-%d
//	//sizeof -关键字-计算类型或变量所占空间的大小
//	printf("%d\n", sizeof(char));//1--------计算机中的单位-计算机识别二进制
//	printf("%d\n", sizeof(short));//2--------bit-比特位  byte-字节=8bit  kb=1024byte  mb=1024kb  gb=1024md  tb=1024gb  pb=1024tb
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//常量-不能改变的量
// 变量-能改变的量
// 定义变量，数据类型+符合 int age
// 可以给变量赋值 age=10
// 
//int main()
//{
//	int age = 20;
//	double weight = 55.5;
//	return  0;
//}
//
////局部变量与全局变量
//int a = 100;//全局变量
//int main()
// {
//	int a= 10；//局部变量
//
//
//
//}//当全局变量与全局变量名字冲突时，局部优先，不建议写成一样
//

////求2个整数和
////scanf 输入函数{
//int main()
//{
//	printf("请输入2个整数:");
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);
//	int sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//作用域和生命周期
//作用域 变量的使用范围  
//局部变量的作用域是变量所在局部范围
//全局变量的作用域是整个工程 包括工程里的其它源文件用只要用extern声明就好
//
//生命周期，变量的生命周期指的是变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命周期开始，出这个范围周期结束。
//全局变量的生命周期：程序的生命周期。


//常量；
//int main()
//{//1.字面常量：1，2，‘a’，
//  //2.const修饰的常变量，被const修饰的变量不能修改，被叫为常变量
//	//const int a = 1;
////3.#define 定义的标识符常量
//	//枚举常量
//	//可以一一列举的常量，是常量默认从0开始
//	enum Sex
//	return 0;
//}

//字符串+转义字符+注释
//加”“就是字符串
//字符数组-数组是一组同类型的元素
//字符串在结尾的位置隐藏一个\0的字符
//求字符串长度strlen
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
//转义字符 转变了它原来的意思
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
//double r1 = 0.0414, r2 = 0.0468, r3 = 0.054, r5 = 0.0585;//rn为n年定期的利息
//double i = 1000;//本金
//int main()
//{
//	int n;
//	//1.一次存五年期
//	n = 5;
//	double  P1 = i * (1 + r5 * n);
//	printf("一次存五年期本息和=%lf\n\n", P1);
//
//	//先存两年期，再存3年期
//	n = 2;
//	double P21 = i * (1 + r2 * n);
//	n = 3;
//	double P2 = P21 * (1 + r3 * n);
//	printf("先存两年期，再存3年期本息和=%lf\n\n", P2);
//
//	//存5次一年期
//	n = 5;
//	double P5 = i * (pow(1 + r1, n));
//	printf("存5次一年期，本息和=%lf\n\n", P5);
//
//	
//	return 0;
//}


//任务一
//int main()
//{
//	int a;
//	double b;
//	char c;
//	printf("请分别输入整数小数字符，中间用空格隔开\n");
//
//	scanf("%d %lf %c", &a, &b, &c);
//	printf("%d %lf %c", a, b, c);
//	return 0;
//}

////任务二
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


////任务三
//int main()
//{
//	float grade1=0, grade2=0, grade3=0, sum;
//	
//	printf("请输入第一个学生的成绩\n");
//	scanf("%f %f %f", &grade1, &grade2, &grade3); 
//	sum = grade1 + grade2 + grade3;
//	printf("第一个学生的总分为sum=%f\n\n", sum);
//
//	printf("请输入第二个学生的成绩\n");
//	scanf("%f %f %f", &grade1, &grade2, &grade3);
//	sum = grade1 + grade2 + grade3;
//	printf("第二个学生的总分为sum=%f\n\n", sum);
//
//	printf("请输入第三个学生的成绩\n");
//	scanf("%f %f %f", &grade1, &grade2, &grade3);
//	sum = grade1 + grade2 + grade3;
//	printf("第三个学生的总分为sum=%f\n", sum);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//终止
//			continue;//跳过后面的代码然后重新for
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//    int line = 0;
//    while (line < 100000)
//    {
//        printf("写代码：%d\n", line);
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
//	printf("输入x的值:");
//	scanf("%d", &x);
//	printf("表达式(x>0)的值:%d\n", x > 0);
//	printf("表达式(x>=-20&&x<=-10)的值:%d\n", x >= -20 && x <= -10);
//	printf("表达式(x>100||x<10)的值:%d\n", x > 100 || x < 10);
//	printf("表达式(x>20&&x/3==0)的值:%d\n", x > 20 && x / 3 == 0);
//	printf("表达式((x%5==0)&&(x%3!=0))的值:%d", (x % 5 == 0) && (x % 3 != 0));
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
//	printf("请输入一个三位数：");
//	scanf("%d", &number);
//	a = number / 100;
//	b = number % 100 / 10;
//	c = number % 100%10;
//	printf("%d个位数字是：%d，十位数字是：%d，百位数字是：%d\n", number, c, b, a);
//
//	return 0;
//}
//int main()
//{
//	int x;
//	printf("请输入x的值：");
//	scanf("%d", &x);
//	printf("表达式(x>0)的值：%d\n", x > 0);
//	printf("表达式(x>=-20&&x<=-10)的值：%d\n", x >= -20 && x < +-10);
//	printf("表达式(x>100||x<10)的值：%d\n", x > 100 || x < 10);
//	printf("表达式(x>20&&x%3==10)的值：%d\n", x > 20 && x % 3 == 10);
//	printf("表达式((x%5==0)&&(x%3!=0))的值：%d\n", (x % 5 == 0) && (x % 3 != 0));
//	return 0;
//}
//int main()
//{
//	int a, b;
//	printf("请输入第一个学生的成绩：");
//	scanf("%d", &a);
//	printf("请输入第二个学生的成绩：");
//	scanf("%d", &b);
//	printf("a∈[0,100]？%d\n", a >= 0 && a <= 100);
//	printf("b∈[0,100]？%d\n", b >= 0 && b <= 100);
//	printf("a>b?%d\n", a > b);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	printf("请输入：");
//	scanf("%d", &a);
//	printf("请输入：");
//	scanf("%d", &b);
//	if (a>b)
//	printf("其中较大的是%d",a);
//	else
//	printf("其中较大的是%d",b);
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
//	printf("请输入")
//	scanf("a=%d", &a);
//	scanf("b=%d", &b);
//	c = MAX(a, b);
//	printf("其中%d比较大",c);
//	return 0;
//}
//int main()
//输入一个字符，小写字母转化成大写，如果是大写就转小写，如果不是字母直接输出。
//int main()
//{
//	char v;
//	printf("请输入一个字符:");
//	scanf("%c", &v);
//	if (v >= 'a' && v <= 'z')
//	{
//		v = v + 'A' - 'a';
//		printf("输入的是一个小写字母它的大写是%c", v);
//
//	}
//	else if (v >= 'A' && v <= 'Z')
//	{
//		v = v - 'A' + 'a';
//		printf("输入的是一个大写字母它的小写是%c", v);
//	}
//	else
//		printf("输入的不是字母");
//	return 0;
//}


//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//
//数据范围：1 \le n \le 100 \1≤n≤100  ， 成绩使用百分制且不可能出现负数
//输入描述：
//两行，
//
//第1行，正整数n（1≤n≤100）
//
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出描述：
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
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

//输入描述：
//每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//
//输出描述：
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
//
//int main() {
//    long long n, m, x, y, i, j;
//    scanf("%lld %lld", &n, &m);
//    i = m > n ? n : m; j = m > n ? m : n;
//    while (i && j)//求最大公约数 辗转相除
//    {
//        j = j % i;
//        if (j == 0 || i == 0)break;
//        i = i % j;
//    }
//    x = i == 0 ? j : i;
//    y = m * n / x;//求最小公倍数==俩数积除以最大公约数
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
//	printf("请输入成绩(0-100):");
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
//	printf("成绩 %d的等级是 %c", grade, gradeLevel);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int grade = -1,d10=-1;
//	char gradeLevel = '0';
//	printf("请输入成绩(0-100):");
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
//	printf("成绩 %d的等级是 %c", grade, gradeLevel);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double result = 1.0;
//	int n = 1,i=1;
//	printf("请输入阶乘中的n（1-100）：");
//	scanf("%d", &n);
//	if(n>=1&&n<=100)
//		for (i;i <= n; i++)
//		{
//			result = result * i;
//		}
//	printf("%d的阶乘是%.0lf", n, result);
// return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = '0';
//	int u = 0, l = 0, d = 0;
//	printf("请输入一串字符，按回车结束：");
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
//	printf("大写字母个数：%d\n小写字母个数：%d\n数字字符个数：%d\nSo Easy!!!", u, l, d);
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