#include<iostream>
using namespace std;

struct Student
{
	int ID;
	string name;
	int age;
	int score;
 } ;
 
struct Teacher
{
	int ID;
	string name;
	int age;
	int score;
	struct Student stu;
};
 
 int main231(void)
{
	struct Student stu ={ 1, "����", 19 ,90	};
	struct Student*p = &stu;
	
	stu.age = 18;
	p->score = 100;
	
	cout << " ѧ�ţ�"<< p->ID <<", ������"<< p->name
	<<", ���䣺"<< p->age <<", ������"<< p->score << endl;
	

	return 0;
} 
