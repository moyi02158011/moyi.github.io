#include<iostream>
using namespace std;

// �ṹ���﷨ 
// struct �ṹ������ {�ṹ���Ա�б�}��

struct Student
{
	int ID;
	string name;
	int age;
	int score;
 } ;
 
 int main1127()
{
	//�����ṹ�����
	//struct �ṹ���� ��������
	struct Student stu1;
	stu1.ID = 1;
	stu1.name = "����";
	stu1.age = 18 ;
	stu1.score = 100;
	
	cout << "  ѧ��" << stu1.ID << "  ����" << stu1.name <<endl;
	
	//struct �ṹ���� ��������
	struct Student stu2={2,"����",19,80}; 
	
	return 0;
}
