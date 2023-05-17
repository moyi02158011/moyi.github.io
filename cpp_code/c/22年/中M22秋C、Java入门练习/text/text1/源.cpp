#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int GCD(int a, int b);
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	GCD(x, y);
//	return 0;
//}
//int GCD(int a, int b)
//{
//	int q; int i = 1; int x=0, y=1;
//	q = a % b;
//	a = b; 
//	b = q;
//	printf("%d %d\n", a, b);
//	if (q > 0)
//	{
//		i++;
//		GCD(a, b);
//	}
//	return 0;
//}
//int main()
//{
//    char ch = 0;
//    int upperNum = 0;
//    int lowerNum = 0;
//    int digitNum = 0;
//    printf("请输入一串字符，按回车结束:");
//    getchar();
//    while (ch != '\n')
//    {
//        if ((ch >= 'A') && (ch <= 'Z'))
//        {
//            upperNum++;
//        }
//
//        else {
//            if ((ch >= 'a') && (ch <= 'z'))
//                lowerNum++;
//            else((ch >= '0') && (ch <= '9'));
//
//            digitNum++;
//        }
//    }
//    printf("大写字母个数:%d小写字母个数:%d数字字母个数:%d\n", upperNum, lowerNum, digitNum);
//    return 0;
//}
//int pr(int a)
//{
//	int sum = 0;
//	for (int i = 1; i < a; i++)
//	{
//		if (a % i == 0)
//			sum += i;
//	}
//	if (sum == a)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 1000; i++)
//	{
//		if (pr(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int number;
//    int num;
//    int a1, a2, a3;
//    printf("请输入一个三位数：");
//    scanf("%d", &number);//输入一个三位数
//    //a1=number%10;//计算个位数
//    //a2=number/10%10;//计算十位数
//    //a3=number/10/10;//计算百位数
//    a1 = number % 10;
//    num = number / 10;
//    a2 = num % 10;
//    a3 = num / 10;
//
//    printf("三位数%d的个位数字是%d，十位数字是%d，百位数字是%d\n", number, a1, a2, a3);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a = 2, b = 3;//定义整型变量a、b，并赋值
//    float x = 3.9, y = 2.3;//定义浮点型变量x、y并赋值
//    float result;//定义存放结果的变量result
//    result = (float)(a + b) / 2 + (int)x % (int)y;//算术表达式
//    printf("%f\n", result);//输出表达式结果
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int grad1;// 声明第1个学生成绩 grad1
//    int grad2;// 声明第2个学生成绩 grad2
//    printf("请输入第1个学生的成绩："); // 提示输入第1个学生成绩
//    scanf("%d", &grad1); // 从键盘输入第1个学生成绩
//    printf("请输入第2个学生的成绩："); // 提示输入第2个学生成绩
//    scanf("%d", &grad2); // 从键盘输入第2个学生成绩
//    printf("grad1是否在[0,100]之内？%d\n", grad1 >= 0 && grad1 <= 100);// 判断grad1 是否[0, 100]范围内
//    printf("grad2是否在[0,100]之内？%d\n", grad2 >= 0 && grad2 <= 100);// 判断grad2 是否[0, 100]范围内
//    printf("grad1>=grad2?%d\n", grad1 >= grad1);// 判断grad1 和grad2的关系
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int x;
//    printf("输入x的值:");
//    scanf("%d", &x);
//    printf("表达式（x>0）的值:%d\n", x > 0);
//    printf("表达式（x>=-20&&x<=-10）的值:%d\n", x >= -20 && x <= -10);// 输出x在-10和-20之间的表达式的值
//    printf("表达式（x>100||x<10）的值:%d\n", x > 100 || x < 10);
//    printf("表达式（x>20&&x%%3==0）的值:%d\n", x > 20 && x % 3 == 0);// 输出x>20并且是3的倍数的表达式的值
//    printf("表达式（(x%%5==0)&&(x%%3!=0)）的值:%d\n", (x % 5 == 0) && (x % 3 != 0));
//    return 0;
//}

//实验七
