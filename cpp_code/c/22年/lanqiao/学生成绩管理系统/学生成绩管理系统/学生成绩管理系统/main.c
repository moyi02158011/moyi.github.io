#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int Number[30];//����ѧ��
char Name[30];//��������
double Chinese[30];//�������ĳɼ�
double Math[30];//������ѧ�ɼ�
double English[30];//����Ӣ��ɼ�
double Physics[30];//��������ɼ�
double History[30];//������ʷ�ɼ�
double PE[30];//���������ɼ�
double Total[30];//�����ܳɼ�

void menu(void)
{
	printf("|<----------------------ѧ���ɼ�����ϵͳ------------------------>|\n");
	printf("|<                      1. ��ѯѧ���ɼ�                         >|\n");
	printf("|<                      2. ��ӡ�ܳɼ���                         >|\n");
	printf("|<                      3. ѧ���ɼ�¼��                         >|\n");
	printf("|<                      4. �޸�ѧ����Ϣ                         >|\n");
	printf("|<                      5. ɾ��ѧ����Ϣ                         >|\n");
	printf("|<                      6. ��ѯѧ�����                         >|\n");
	printf("|<                      7. �˳�����ϵͳ                         >|\n");
	printf("|<-------------------------------------------------------------->|\n");
}

void menu1(int n)
{
	int i=1;
	if (n < 1)
		printf("����¼��ɼ���");
	else
	{

		do
		{
			printf("������ѧ�����(����0�˳�)");
			scanf("%d", &i);
			if (i<0)
			{
				("������󣡣�");
				continue;
			}
			else if (i==0)
			{
				break;
			}
			else
			{
				printf("��ţ�%02d  ѧ�ţ�%d  ���ģ�%.2lf  ��ѧ��%.2lf  Ӣ�%.2lf  ����%.2lf  ��ʷ��%.2lf  ������%.2lf  �ܷ֣�%.2lf\n", i, Name[i], Number[i], Chinese[i], Math[i], English[i], Physics[i], History[i], PE[i]);
			}
		} while (i!=0);

		
	}
}
void menu2(int n)
{
	if (n > 0) {
		int i = 0;
		for (i = 1; i <= n; i++)
			printf("��ţ�%02d  ѧ�ţ�%d  ���ģ�%.2lf  ��ѧ��%.2lf  Ӣ�%.2lf  ����%.2lf  ��ʷ��%.2lf  ������%.2lf  �ܷ֣�%.2lf\n", i, Name[i], Number[i], Chinese[i], Math[i], English[i], Physics[i], History[i], PE[i]);
	}
	else
		printf("����¼��ɼ�����");
}
void menu3(int n)//3.ѧ���ɼ�¼��
{
	printf("��ǰѧ�������Ϊ%d",& n);
	printf("������ѧ�ţ�\n");
	scanf("%lf", Number[n]);
	printf("������������\n");
	scanf("%lf", Name[n]);
	printf("���������ĳɼ���\n");
	scanf("%lf", Chinese[n]);
	printf("��������ѧ�ɼ���\n");
	scanf("%lf", Math[n]);
	printf("������Ӣ��ɼ���\n");
	scanf("%lf", English[n]);
	printf("����������ɼ���\n");
	scanf("%lf", Physics[n]);
	printf("��������ʷ�ɼ���\n");
	scanf("%lf", History[n]);
	printf("�����������ɼ���\n");
	scanf("%lf", PE[n]);
}
void menu4(int n)
{
	if (n < 1)
	{
		printf("����¼��ɼ�");
	}
	else
	{
		int i = 0;
		do
		{
			printf("������ѧ�����(����0�˳�)");
			scanf("%d", &i);
			if (i<0||i>n)
			{
				("������󣡣�");
				continue;
			}
			else if (i == 0)
			{
				break;
			}
			else
			{
				printf("�������޸ĺ�ѧ�ţ�\n");
				scanf("%lf", Number[i]);
				printf("�������޸ĺ����ĳɼ���\n");
				scanf("%lf", Chinese[i]);
				printf("�������޸ĺ���ѧ�ɼ���\n");
				scanf("%lf", Math[i]);
				printf("�������޸ĺ�Ӣ��ɼ���\n");
				scanf("%lf", English[i]);
				printf("�������޸ĺ�����ɼ���\n");
				scanf("%lf", Physics[i]);
				printf("�������޸ĺ���ʷ�ɼ���\n");
				scanf("%lf", History[i]);
				printf("�������޸ĺ������ɼ���\n");
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
	printf("\n|<---------------------���˳��ɼ�����ϵͳ----------------------->|\n");
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
				printf("������󣬷��ز˵���������"); break;
		}
	} while (input != 6);

	return 0;
}