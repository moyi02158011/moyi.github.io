#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<math.h>
//int main()
//{
//	
//	double result = 1.0;
//	int n = 1;
//	int fun(n);
//	printf("请输入求阶乘中的n（1~100）");
//	scanf("%d", &n);
//	result = fun(n);
//	printf("n!=%.0lf", result);
//	return 0;
//}
//int main()
//{
//	float width=0, length=0, height=0, area=0, volume=0;
//	float getRectArea(float length, float width);
//	float getCuboidVolume(float length, float width, float height);
//	printf("请依次输入长宽高");
//	scanf("%f %f %f", &length, &width, &height);
//	area = getRectArea(length, width);
//	volume = getCuboidVolume(length, width, height);
//	printf("矩形(长：%f，宽：%f)的面积为%f\n", length, width, area);
//	printf("矩形(长：%f，宽：%f，高：%f)的体积为%f", length, width, height, volume);
//	return 0;
//}
//int main()
//{
//	int grade = -1; char gradeLeve1 = '0';
//	char getGradeLeve(int grade);
//	printf("请输入成绩（0~100）\n");
//	scanf("%d", &grade);
//	gradeLeve1 = getGradeLeve(grade);
//	printf("成绩 %d的等级是%c\nSo Easy!!!!!", grade, gradeLeve1);
//	return 0;
//}
//int main() {
//    double m, kg, BIM;
//    scanf("%lf %lf", &m, &kg);
//    BIM = kg / (m * m);
//    if (BIM < 18.5)
//        printf("偏瘦");
//    else if (BIM >= 18.5 && BIM < 20.9)
//        printf("苗条");
//    else if (BIM >= 20.9 && BIM <= 24.9)
//        printf("适中");
//    else
//        printf("偏胖");
//    return 0;
//}
//int main() {
//    int grade;
//    scanf("%d", &grade);
//    switch (grade / 10)
//    {
//    case 10:
//    case 9:printf("优秀");
//        break;
//    case 8:printf("良");
//        break;
//    case 7:printf("中");
//        break;
//    case 6:printf("及格");
//        break;
//    case 5:
//    case 4:
//    case 3:
//    case 2:
//    case 1:
//    case 0:printf("差");
//    default:
//        printf("成绩不合法");
//    }
//    return 0;
//}
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 3:
//	case 4:
//	case 5:
//		printf("春天");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("夏季");
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("秋季");
//		break;
//	case 12:
//	case 1:
//	case 2:
//		printf("冬天");
//		break;
//	default:
//		printf("不合法");
//		break;
//	}
//	return 0;
//}
//int main() {
//	int n=1,num=0;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++) {
//		if (i % 2 == 0)
//			num += i;
//	}
//	printf("%d", num);
//	return 0;
//}
//int main() {
//	double range=0,t1=0,t2=0;
//	scanf("%lf", &range);
//	t1 = range;
//	t2 = range / 10 + 10;
//	if (t1 <= t2)
//		printf("w");
//	else
//		printf("v");
//	return 0;
//}
//int main() {
//	int x = 0, y = 0, x1 = 0, y1 = 0;
//	scanf("%d %d", &x, &y);
//	scanf("%d %d", &x1, &y1);
//	if (x == x1)
//	{
//		if (y1 - y == 1)
//			printf("u");
//		else
//			printf("d");
//	}
//	else
//	{
//		if (x1 - x == 1)
//			printf("r");
//		else
//			printf("l");
//	}
//	return 0;
//}
//int main() {
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:printf("Monday"); break;
//	case 2:printf("Tuesday"); break;
//	case 3:printf("Wednesday"); break;
//	case 4:printf("Thursday"); break;
//	case 5:printf("Friday"); break;
//	case 6:printf("Saturday"); break;
//	case 7:printf("Sunday"); break;
//		}
//	return 0;
//}
//int main() {
//	int HTTP;
//	while (scanf("%d", &HTTP) != -1){
//		switch (HTTP)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n"); 
//			break;
//		case 403:
//			printf("Forbidden\n"); 
//			break;
//		case 404:
//			printf("Not Found\n"); 
//			break;
//		case 500:
//			printf("Internal Server Error\n"); 
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}
//int main() {
//	long t;
//	while (scanf("%ld", &t) != -1){
//		if (t > 0)
//			printf("1\n");
//		else if(t==0)
//		printf("0.5\n");
//		else
//		printf("0\n");
//		}
//	return 0;
//	}
//int main() {
//	double a, b, c;
//	while (scanf("%lf %lf %lf", &a,&b,&c) != -1) {
//		if (a < b + c && b < a + c == c < a + b)
//		{
//			if (a == b && b && c)
//				printf("Equilateral triangle!\n");
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}
//int main() {
//	double a, b, c;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != -1) {
//		if (a < b + c && b < a + c && c < a + b)
//		{
//			if (a == b && b && c)
//				printf("Equilateral triangle!\n");
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}
//int main() {
//	int y, m, d, y1, m1, d1;
//	scanf("%d %d %d", &y, &m, &d);
//	scanf("%d %d %d", &y1, &m1, &d1);
//	if (y1 > y)
//		printf("yes");
//	else if (y1 == y)
//		if (m1 > m)
//			printf("yes");
//		else if (m1 == m)
//			if (d1 > d)
//				printf("yes");
//			else if(d1=d)
//				printf("yes");
//			else printf("no");
//		else printf("no");
//	else printf("no");
//	return 0;
//}
//int main() {
//    double a, b, c, deta, x1, x2, s, x;
//    while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//    {
//        deta = b * b - 4 * a * c;
//        x1 = (-b - sqrt(deta)) / (2 * a);
//        x2 = (-b + sqrt(deta)) / (2 * a);
//        s = -b / (2 * a);
//        x = sqrt(-deta) / (2 * a);
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else {
//            if (deta == 0)
//                if (x1 != 0)printf("x1=x2=%.2lf\n", x2);
//                else printf("0.00");
//            else if (deta > 0)
//                printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
//            else
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", s, x, s, x);
//        }
//    }
//    return 0;
//}
//int main() {
//	long BJT;
//	scanf("%ld", &BJT);
//	if (BJT >= 800)
//		printf("%ld", BJT - 800);
//	else
//		printf("%ld", BJT + 1600);
//	return 0;
//}
//int main() {
//	int j = 4;
//	for (int i = j; i <= 2 * j; i++)
//	{
//		switch (i/j)
//		{
//		case 0:
//		case 1:
//			printf("*");
//			break;
//		case 2:printf("#");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int j=0;
//	int a[100][2];
//	for (int i = 0; ; i++)
//	{
//		scanf("%d %d", &a[i][0], &a[i][1]);
//		j = i;
//		if (a[i][0] == 0)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%dx%d", a[i][1],a[i][0]);
//		
//		printf("+");
//	}
//	return 0;
//}
//int main() {
//	int m, y;
//	while (scanf("%4d %2d", &y, &m) != -1) {
//		if (m == 2)
//		{
//			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//				printf("29\n");
//			else
//				printf("28\n");
//		}
//		else
//			switch (m)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("31\n"); break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30\n"); break;
//			}
//	}
//	return 0;
//}
//int main() {
//	int math, chinese, english;
//	scanf("%d %d %d", &math, &chinese, &english);
//	if ((math + chinese + english) * 1.0 / 3 >= 60)
//		printf("NO");
//	else
//		printf("YES");
//	return 0;
//}
//int main() {
//	int a, b, c, d;
//	scanf("%1d-%3d-%5d-%1d", &a, &b, &c, &d);
//	if ((a * 1 + b / 100 * 2 + b / 10 % 10 * 3 + b % 10 * 4 + d / 10000 * 5 + d / 1000 % 10 * 6 + d / 100 % 10 * 7 + d / 10 % 10 * 8 + d % 10 * 9) % 11 == 4)
//		printf("Right\n");
//	else
//		printf("%d\n", (a * 1 + b / 100 * 2 + b / 10 % 10 * 3 + b % 10 * 4 + d / 10000 * 5 + d / 1000 % 10 * 6 + d / 100 % 10 * 7 + d / 10 % 10 * 8 + d % 10 * 9) % 11);
//	return 0;
//}
//int main() {
//    int n, x, y = 0,j;
//	while (scanf("%d %d", &n, &x) != -1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for(int j=i;j>=10;j/=10)
//			{
//			
//				if (j % 10 == x)
//					y++;
//				if (j / 10 == x)
//					y++;
//
//			}
//			if (i == x)
//				y++;
//		}
//		printf("%d\n", y);
//		y = 0;
//	}
//    return 0;
//}

//int main() {
//	int a, b = 0, c = 0;
//	scanf("%d", &a);
//	if (a != -1) {
//		if (a % 2 == 0)
//			b++;
//		else
//			c++;
//	}
//	while (a != -1)
//	{
//		scanf("%d", &a);
//		if (a != -1) {
//			if (a % 2 == 0)
//				b++;
//			else
//				c++;
//		}
//	}
//	printf("%d %d", c, b);
//	return 0;
//}

//int main() {
//	unsigned long a=0,b=1,c=0;
//	scanf("%lu", &a);
//	for (int i = a; i > 0; i /= 10)
//	{
//		
//		if (i % 10 % 2 == b % 2)
//		{
//			c += pow(2, b - 1);
//		}
//		b++;
//	}
//	printf("%lu", c);
//	return 0;
//}
//int main()
//{
//	long long a,b=0;
//	scanf("%lld", &a);
//	if (a < 0)
//	{
//		printf("fu ");
//		a *= -1;
//	}
//	for (long long i = a; i > 0; i /= 10)
//	{
//		b++;
//	}
//	
//	for (long long i = b; i > 0; i--)
//	{
//		switch (a / ((int)pow(10, i - 1)) % 10)
//		{
//		case 1:printf("yi"); break;
//		case 2:printf("er"); break;
//		case 3:printf("san"); break;
//		case 4:printf("si"); break;
//		case 5:printf("wu"); break;
//		case 6:printf("liu"); break;
//		case 7:printf("qi"); break;
//		case 8:printf("ba"); break;
//		case 9:printf("jiu"); break;
//		case 0:printf("ling"); break;
//		}
//		if (i >= 2)
//			printf(" ");
//
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int n = 1, m = 1;
//	scanf("%d %d", &n, &m);
//	int arr[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};
//	for (int i = n - 1; i < m; i++)
//	{
//		num += arr[i];
//	}
//	printf("%d", num);
//	return 0;
//}

//void bubble_sort(int arr[],int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0;j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}

//int main()
//{
//	int l, k, n, num=0;
//	int arr[10000];
//	scanf("%d %d %d", &l, &k, &n);
//	for (int i = 1;i<=n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	arr[0] = 1;
//	arr[n + 1] = l;
//	for (int i = 1;i<=n+1; i++)
//	{
//		num += (arr[i] - arr[i - 1] - 1) / k;
//	}
//	printf("%d", num);
//	return 0;
//}


int main()
{
	int n=1, result=0;
	printf("请输入一个整数：\n");
	while (scanf("%d", &n) != EOF)
	{
		int jiecheng(int n);
		result = jiecheng(n);
		printf("%d的阶乘是%d\n\n", n, result);
		if (n <= 0)
			break;
		printf("请输入一个整数：\n");
	}
	return 0;
}

//
//int main()
//{
//	float width = 0, length = 0, height = 0, area = 0, volume = 0;
//	float getRectArea(float length, float width);
//	float getCuboidVolume(float length, float width, float height);
//	
//	printf("请依次输入长宽高\n");
//	while (scanf("%f %f %f", &length, &width, &height) != EOF)
//	{
//	area = getRectArea(length, width);
//	volume = getCuboidVolume(length, width, height);
//	printf("矩形(长：%f，宽：%f)的面积为%f\n", length, width, area);
//	printf("矩形(长：%f，宽：%f，高：%f)的体积为%f\n\n", length, width, height, volume);
//	if (length <= 0 || width <= 0 || height <= 0)
//	break;
//	printf("请依次输入长宽高\n");
//}
//	return 0;
//}
//
//int main()
//{
//	int grade = -1; char gradeLeve1 = '0';
//	char getGradeLeve(int grade);
//
//	printf("请输入成绩（0~100）\n");
//	while (scanf("%d", &grade)!=EOF)
//	{
//		gradeLeve1 = getGradeLeve(grade);
//		printf("成绩 %d的等级是%c\nSo Easy!!!!!\n\n", grade, gradeLeve1);
//		if (grade <= 0)
//			break;
//		printf("请输入成绩（0~100）\n");
//	}
//	return 0;
//}