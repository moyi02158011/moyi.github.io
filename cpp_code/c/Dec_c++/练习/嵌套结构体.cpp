#include<iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
 } ;
 
struct Teacher
{
	int id;
 	string name;
	int age;
	struct Student stu;
};

int main(){
	struct Teacher t1;
	t1.id =1;
	t1.name ="����";
	t1.age =40;
	
	t1.stu.name = "����";
	t1.stu.age = 19;
	t1.stu.score = 88;
	
	cout <<"��ʦ��ţ�"<< t1.id << "�� ��ʦ������"<<t1.name<<"�� ��ʦ���䣺" << t1.age <<endl;
	
	return 0;
} 
