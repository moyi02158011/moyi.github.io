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
//    printf("������һ���ַ������س�����:");
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
//    printf("��д��ĸ����:%dСд��ĸ����:%d������ĸ����:%d\n", upperNum, lowerNum, digitNum);
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
//    printf("������һ����λ����");
//    scanf("%d", &number);//����һ����λ��
//    //a1=number%10;//�����λ��
//    //a2=number/10%10;//����ʮλ��
//    //a3=number/10/10;//�����λ��
//    a1 = number % 10;
//    num = number / 10;
//    a2 = num % 10;
//    a3 = num / 10;
//
//    printf("��λ��%d�ĸ�λ������%d��ʮλ������%d����λ������%d\n", number, a1, a2, a3);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a = 2, b = 3;//�������ͱ���a��b������ֵ
//    float x = 3.9, y = 2.3;//���帡���ͱ���x��y����ֵ
//    float result;//�����Ž���ı���result
//    result = (float)(a + b) / 2 + (int)x % (int)y;//�������ʽ
//    printf("%f\n", result);//������ʽ���
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int grad1;// ������1��ѧ���ɼ� grad1
//    int grad2;// ������2��ѧ���ɼ� grad2
//    printf("�������1��ѧ���ĳɼ���"); // ��ʾ�����1��ѧ���ɼ�
//    scanf("%d", &grad1); // �Ӽ��������1��ѧ���ɼ�
//    printf("�������2��ѧ���ĳɼ���"); // ��ʾ�����2��ѧ���ɼ�
//    scanf("%d", &grad2); // �Ӽ��������2��ѧ���ɼ�
//    printf("grad1�Ƿ���[0,100]֮�ڣ�%d\n", grad1 >= 0 && grad1 <= 100);// �ж�grad1 �Ƿ�[0, 100]��Χ��
//    printf("grad2�Ƿ���[0,100]֮�ڣ�%d\n", grad2 >= 0 && grad2 <= 100);// �ж�grad2 �Ƿ�[0, 100]��Χ��
//    printf("grad1>=grad2?%d\n", grad1 >= grad1);// �ж�grad1 ��grad2�Ĺ�ϵ
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int x;
//    printf("����x��ֵ:");
//    scanf("%d", &x);
//    printf("���ʽ��x>0����ֵ:%d\n", x > 0);
//    printf("���ʽ��x>=-20&&x<=-10����ֵ:%d\n", x >= -20 && x <= -10);// ���x��-10��-20֮��ı��ʽ��ֵ
//    printf("���ʽ��x>100||x<10����ֵ:%d\n", x > 100 || x < 10);
//    printf("���ʽ��x>20&&x%%3==0����ֵ:%d\n", x > 20 && x % 3 == 0);// ���x>20������3�ı����ı��ʽ��ֵ
//    printf("���ʽ��(x%%5==0)&&(x%%3!=0)����ֵ:%d\n", (x % 5 == 0) && (x % 3 != 0));
//    return 0;
//}

//ʵ����
