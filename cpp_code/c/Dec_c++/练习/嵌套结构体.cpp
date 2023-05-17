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
	t1.name ="老王";
	t1.age =40;
	
	t1.stu.name = "张三";
	t1.stu.age = 19;
	t1.stu.score = 88;
	
	cout <<"教师编号："<< t1.id << "， 教师姓名："<<t1.name<<"， 教师年龄：" << t1.age <<endl;
	
	return 0;
} 
