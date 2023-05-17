#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����һ���ṹ��
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

node List;//��������
int readFile(node* L);//��ȡ�ļ�
void ui();// ��ӡִ�н���
void addStuInfo();//¼��ѧ����Ϣ
void deleteStuInfo(node* L);//ɾ��ѧ����Ϣ
void searchStuInfo(node* L);//��ѯѧ����Ϣ
void printStuInfo(node* L);//���ѧ����Ϣ
void goodBye();//�˳�����

//��ȡ�ļ�
int readFile(node* L) {
	FILE* fpr = fopen("D:\\studentInfo.txt", "r");//�ȴ��ļ�
	node st;//������ȡ�ļ�
	node* s;
	node* t = L;//����
	if (fpr == NULL) return 0;
	else
	{//������ȡ�ļ����ݣ�
		while (fscanf(fpr, "%lld %s %s %d %d %d %d", &st.id, st.name, st.sex, &st.ch, &st.ma, &st.en, &st.sum) != EOF) {
			s = (node*)malloc(sizeof(node));//����㣬��̬�ڴ�
			*s = st;//�Ŷ�ȡ���ļ�����

			//β�巨
			t->next = s;//����βָ��ĺ�һ�����ָ���½�� 
			t = s;//����β���
			t->next = NULL;//����β���
		}
	}
	fclose(fpr);//�ر��ļ�ָ��
	return 1;
}

//���������ļ��ĺ���
int saveFile(node* L) {
	FILE* fpw = fopen("D:\\studentInfo.txt", "w");
	if (fpw == NULL) return 0;
	node* p = L->next;
	while (p != NULL) {
		fprintf(fpw, "%lld %s %s %d %d %d %d\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
		p = p->next;
	}
	fclose(fpw);//�ر��ļ�ָ��
	return 1;
}

// ��ӡִ�н���
void ui()
{
	printf("*****************************************************************************************\n");
	printf("*\t\t\t\t��ӭʹ��ѧ���ɼ�����ϵͳ\t\t\t\t*\n");
	printf("*****************************************************************************************\n");
	printf("*\t\t\t\t   1.¼��ѧ����Ϣ\t\t\t\t\t*\n");
	printf("*\t\t\t\t   2.ɾ��ѧ����Ϣ\t\t\t\t\t*\n");
	printf("*\t\t\t\t   3.����ѧ����Ϣ\t\t\t\t\t*\n");
	printf("*\t\t\t\t   4.���ѧ����Ϣ\t\t\t\t\t*\n");
	printf("*\t\t\t\t   0.�˳�ϵͳ\t\t\t\t\t\t*\n");
	printf("*****************************************************************************************\n");
	printf("�������Ӧ�Ĺ��ܽ���");
}


//¼��ѧ����Ϣ
void addStuInfo() {
	node st;
	printf("����������ѧ�������Ϣ\n");
	printf("ѧ��:");
	scanf("%lld", &st.id);
	printf("������");
	scanf("%s", st.name);
	printf("�Ա�:");
	scanf("%s", st.sex);
	printf("����:");
	scanf("%d", &st.ch);
	printf("��ѧ:");
	scanf("%d", &st.ma);
	printf("Ӣ��:");
	scanf("%d", &st.en);
	st.sum = st.ch + st.ma + st.en;

	//ͷ�巨
	node* h = &List;
	node* s = (node*)malloc(sizeof(node));
	*s = st;
	s->next = h->next;
	h->next = s;

	//�����ļ� 
	saveFile(&List);
}




//���������в��� 
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
//��ѧ�Ž��в��� 
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
//��ѯѧ����Ϣ
void searchStuInfo(node* L) {
	int ch = 0;
	int id;
	char name[50];
	node* st;
	printf("��ѧ�Ų�ѯ----- 1\n");
	printf("��������ѯ----- 2\n");
	printf("�������ѯ��ʽ��");
	scanf("%d", &ch);

	if (ch == 1) {
		printf("������Ҫ��ѯ��ѧ�ţ�");
		scanf("%d", &id);
		st = searchStuInfoById(id, L);

		if (st == NULL) {
			printf("���޴��ˣ�\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|ѧ��|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
			printf("________________________________________________________\n");
			printf("%lld\t\t|%s\t\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);

		}
	}
	else if (ch == 2) {
		printf("������Ҫ��ѯ��������");
		scanf("%s", name);
		st = searchStuInfoByName(name, L);

		if (st == NULL) {
			printf("���޴��ˣ�\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|ѧ��\t\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
			printf("________________________________________________________\n");
			printf("%lld\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
		}
	}
}


//���ɾ�� 
void deletes(node* pr) {
	node* s = pr->next;

	pr->next = s->next;
	s->next = NULL;

	free(s);//�ͷŽ��ռ� 

}
//ɾ��ѧ����Ϣ
void deleteStuInfo(node* L) {
	int id;

	node* p;

	printf("������Ҫ���ҵ�ѧ��ѧ��");
	scanf("%d", &id);
	node* st = searchStuInfoById(id, L);
	p = st;

	if (st == NULL) {
		printf("���޴��ˣ�");
		return;
	}

	st = st->next;
	printf("________________________________________________________\n");
	printf("|ѧ��\t\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
	printf("________________________________________________________\n");
	printf("%lld\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);

	deletes(p);//���ɾ�� 
	saveFile(L);
}



//�����������ѧ����Ϣ
void printStuInfo(node* L) {
	node* p = L->next;
	printf("*****************************************************************************************\n");
	printf("________________________________________________________\n");
	printf("ѧ��\t\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t\n");
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
	printf("��ӭ�´�ʹ��~\n");
	exit(0);//�������� 
}