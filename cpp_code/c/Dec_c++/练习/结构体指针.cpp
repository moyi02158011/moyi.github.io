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
	struct Student stu ={ 1, "张三", 19 ,90	};
	struct Student*p = &stu;
	
	stu.age = 18;
	p->score = 100;
	
	cout << " 学号："<< p->ID <<", 姓名："<< p->name
	<<", 年龄："<< p->age <<", 分数："<< p->score << endl;
	

	return 0;
} 
