#include "StudentInfo.h"

int main()
{
	int ch;
	readFile(&List);

	while (1) {
		ui();
		scanf("%d", &ch);
		switch (ch)//ASCII��������
		{
		case 1://1.¼��ѧ����Ϣ
			addStuInfo();
			break;
		case 2://2.ɾ��ѧ����Ϣ
			deleteStuInfo(&List);
			break;
		case 3://3.����ѧ����Ϣ
			searchStuInfo(&List);
			break;
		case 4://4.���ѧ����Ϣ
			printStuInfo(&List);
			break;
		case 0://0.�˳�ϵͳ
			goodBye();
			break;
		}
	}
	return 0;
}