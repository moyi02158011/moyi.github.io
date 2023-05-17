#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//定义一个结构体
typedef struct Node {
	long long id;
	char name[50];
	char sex[10];
	int ch;
	int ma;
	int en;
	int sum;
	struct Node* next;
}node;

node List;//定义链表
int readFile(node* L);//读取文件
void ui();// 打印执行界面
void addStuInfo();//录入学生信息
void deleteStuInfo(node* L);//删除学生信息
void searchStuInfo(node* L);//咨询学生信息
void printStuInfo(node* L);//输出学生信息
void goodBye();//退出程序

//读取文件
int readFile(node* L) {
	FILE* fpr = fopen("D:\\studentInfo.txt", "r");//先打开文件
	node st;//用来读取文件
	node* s;
	node* t = L;//链表
	if (fpr == NULL) return 0;
	else
	{//遍历读取文件内容，
		while (fscanf(fpr, "%lld %s %s %d %d %d %d", &st.id, st.name, st.sex, &st.ch, &st.ma, &st.en, &st.sum) != EOF) {
			s = (node*)malloc(sizeof(node));//开结点，动态内存
			*s = st;//放读取的文件内容

			//尾插法
			t->next = s;//链表尾指针的后一个结点指向新结点 
			t = s;//更新尾结点
			t->next = NULL;//更新尾结点
		}
	}
	fclose(fpr);//关闭文件指针
	return 1;
}

//用来保存文件的函数
int saveFile(node* L) {
	FILE* fpw = fopen("D:\\studentInfo.txt", "w");
	if (fpw == NULL) return 0;
	node* p = L->next;
	while (p != NULL) {
		fprintf(fpw, "%lld %s %s %d %d %d %d\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
		p = p->next;
	}
	fclose(fpw);//关闭文件指针
	return 1;
}

// 打印执行界面
void ui()
{
	printf("*****************************************************************************************\n");
	printf("*\t\t\t\t欢迎使用学生成绩管理系统\t\t\t\t*\n");
	printf("*****************************************************************************************\n");
	printf("*\t\t\t\t   1.录入学生信息\t\t\t\t\t*\n");
	printf("*\t\t\t\t   2.删除学生信息\t\t\t\t\t*\n");
	printf("*\t\t\t\t   3.查找学生信息\t\t\t\t\t*\n");
	printf("*\t\t\t\t   4.输出学生信息\t\t\t\t\t*\n");
	printf("*\t\t\t\t   0.退出系统\t\t\t\t\t\t*\n");
	printf("*****************************************************************************************\n");
	printf("请输入对应的功能健：");
}


//录入学生信息
void addStuInfo() {
	node st;
	printf("请输入新增学生相关信息\n");
	printf("学号:");
	scanf("%lld", &st.id);
	printf("姓名：");
	scanf("%s", st.name);
	printf("性别:");
	scanf("%s", st.sex);
	printf("语文:");
	scanf("%d", &st.ch);
	printf("数学:");
	scanf("%d", &st.ma);
	printf("英语:");
	scanf("%d", &st.en);
	st.sum = st.ch + st.ma + st.en;

	//头插法
	node* h = &List;
	node* s = (node*)malloc(sizeof(node));
	*s = st;
	s->next = h->next;
	h->next = s;

	//保存文件 
	saveFile(&List);
}




//按姓名进行查找 
node* searchStuInfoByName(char name[], node* L) {
	node* p = L;

	while (p->next != NULL) {

		if (strcmp(name, p->next->name) == 0) {
			return p;
		}

		p = p->next;
	}

	return NULL;
}
//按学号进行查找 
node* searchStuInfoById(int id, node* L) {

	node* p = L;

	while (p->next != NULL) {

		if (p->next->id == id) {
			return p;
		}

		p = p->next;
	}

	return NULL;
}
//查询学生信息
void searchStuInfo(node* L) {
	int ch = 0;
	int id;
	char name[50];
	node* st;
	printf("按学号查询----- 1\n");
	printf("按姓名查询----- 2\n");
	printf("请输入查询方式：");
	scanf("%d", &ch);

	if (ch == 1) {
		printf("请输入要查询的学号：");
		scanf("%d", &id);
		st = searchStuInfoById(id, L);

		if (st == NULL) {
			printf("查无此人！\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|学号|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
			printf("________________________________________________________\n");
			printf("%lld\t\t|%s\t\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);

		}
	}
	else if (ch == 2) {
		printf("请输入要查询的姓名：");
		scanf("%s", name);
		st = searchStuInfoByName(name, L);

		if (st == NULL) {
			printf("查无此人！\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|学号\t\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
			printf("________________________________________________________\n");
			printf("%lld\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
		}
	}
}


//结点删除 
void deletes(node* pr) {
	node* s = pr->next;

	pr->next = s->next;
	s->next = NULL;

	free(s);//释放结点空间 

}
//删除学生信息
void deleteStuInfo(node* L) {
	int id;

	node* p;

	printf("请输入要查找的学生学号");
	scanf("%d", &id);
	node* st = searchStuInfoById(id, L);
	p = st;

	if (st == NULL) {
		printf("查无此人！");
		return;
	}

	st = st->next;
	printf("________________________________________________________\n");
	printf("|学号\t\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
	printf("________________________________________________________\n");
	printf("%lld\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);

	deletes(p);//结点删除 
	saveFile(L);
}



//遍历数组输出学生信息
void printStuInfo(node* L) {
	node* p = L->next;
	printf("*****************************************************************************************\n");
	printf("________________________________________________________\n");
	printf("学号\t\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t\n");
	printf("________________________________________________________\n");

	if (p != NULL) {

		while (p != NULL) {
			printf("%lld\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
			printf("________________________________________________________\n");
			p = p->next;
		}
	}
}



void goodBye() {
	printf("欢迎下次使用~\n");
	exit(0);//结束程序 
}