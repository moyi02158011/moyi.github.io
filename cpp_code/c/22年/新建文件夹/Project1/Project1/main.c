#include "StudentInfo.h"

int main()
{
	int ch;
	readFile(&List);

	while (1) {
		ui();
		scanf("%d", &ch);
		switch (ch)//ASCII码是整数
		{
		case 1://1.录入学生信息
			addStuInfo();
			break;
		case 2://2.删除学生信息
			deleteStuInfo(&List);
			break;
		case 3://3.查找学生信息
			searchStuInfo(&List);
			break;
		case 4://4.输出学生信息
			printStuInfo(&List);
			break;
		case 0://0.退出系统
			goodBye();
			break;
		}
	}
	return 0;
}