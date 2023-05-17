#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int Number[30];//保存学号
char Name[30];//保存姓名
double Chinese[30];//保存语文成绩
double Math[30];//保存数学成绩
double English[30];//保存英语成绩
double Physics[30];//保存物理成绩
double History[30];//保存历史成绩
double PE[30];//保存体育成绩
double Total[30];//保存总成绩

void menu(void)
{
	printf("|<----------------------学生成绩管理系统------------------------>|\n");
	printf("|<                      1. 查询学生成绩                         >|\n");
	printf("|<                      2. 打印总成绩单                         >|\n");
	printf("|<                      3. 学生成绩录入                         >|\n");
	printf("|<                      4. 修改学生信息                         >|\n");
	printf("|<                      5. 删除学生信息                         >|\n");
	printf("|<                      6. 查询学生序号                         >|\n");
	printf("|<                      7. 退出管理系统                         >|\n");
	printf("|<-------------------------------------------------------------->|\n");
}

void menu1(int n)
{
	int i=1;
	if (n < 1)
		printf("请先录入成绩。");
	else
	{

		do
		{
			printf("请输入学生序号(输入0退出)");
			scanf("%d", &i);
			if (i<0)
			{
				("输入错误！！");
				continue;
			}
			else if (i==0)
			{
				break;
			}
			else
			{
				printf("序号：%02d  学号：%d  语文：%.2lf  数学：%.2lf  英语：%.2lf  物理：%.2lf  历史：%.2lf  体育：%.2lf  总分：%.2lf\n", i, Name[i], Number[i], Chinese[i], Math[i], English[i], Physics[i], History[i], PE[i]);
			}
		} while (i!=0);

		
	}
}
void menu2(int n)
{
	if (n > 0) {
		int i = 0;
		for (i = 1; i <= n; i++)
			printf("序号：%02d  学号：%d  语文：%.2lf  数学：%.2lf  英语：%.2lf  物理：%.2lf  历史：%.2lf  体育：%.2lf  总分：%.2lf\n", i, Name[i], Number[i], Chinese[i], Math[i], English[i], Physics[i], History[i], PE[i]);
	}
	else
		printf("请先录入成绩！！");
}
void menu3(int n)//3.学生成绩录入
{
	printf("当前学生的序号为%d",& n);
	printf("请输入学号：\n");
	scanf("%lf", Number[n]);
	printf("请输入姓名：\n");
	scanf("%lf", Name[n]);
	printf("请输入语文成绩：\n");
	scanf("%lf", Chinese[n]);
	printf("请输入数学成绩：\n");
	scanf("%lf", Math[n]);
	printf("请输入英语成绩：\n");
	scanf("%lf", English[n]);
	printf("请输入物理成绩：\n");
	scanf("%lf", Physics[n]);
	printf("请输入历史成绩：\n");
	scanf("%lf", History[n]);
	printf("请输入体育成绩：\n");
	scanf("%lf", PE[n]);
}
void menu4(int n)
{
	if (n < 1)
	{
		printf("请先录入成绩");
	}
	else
	{
		int i = 0;
		do
		{
			printf("请输入学生序号(输入0退出)");
			scanf("%d", &i);
			if (i<0||i>n)
			{
				("输入错误！！");
				continue;
			}
			else if (i == 0)
			{
				break;
			}
			else
			{
				printf("请输入修改后学号：\n");
				scanf("%lf", Number[i]);
				printf("请输入修改后语文成绩：\n");
				scanf("%lf", Chinese[i]);
				printf("请输入修改后数学成绩：\n");
				scanf("%lf", Math[i]);
				printf("请输入修改后英语成绩：\n");
				scanf("%lf", English[i]);
				printf("请输入修改后物理成绩：\n");
				scanf("%lf", Physics[i]);
				printf("请输入修改后历史成绩：\n");
				scanf("%lf", History[i]);
				printf("请输入修改后体育成绩：\n");
				scanf("%lf", PE[i]);
			}
		} while (i != 0);
	}
}
void menu5(viod) {

}
void menu6(viod) {

}
void menu7(viod) {
	printf("\n|<---------------------已退出成绩管理系统----------------------->|\n");
}




int main() {
	int input=0;
	int n=0;

	do
		{
		menu;
			switch (input)
			{
			case 1:
				menu1; break;
			case 2:
				menu2(n); break;
			case 3:
				n++;
				menu3(n); break;
			case 4:
				menu4; break;
			case 5:
				menu5; break;
			case 6:
				menu6; break;
			default:
				printf("输入错误，返回菜单！！！！"); break;
		}
	} while (input != 6);

	return 0;
}