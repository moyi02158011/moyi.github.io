#include<iostream>
using namespace std;

// 结构体语法 
// struct 结构体名称 {结构体成员列表}；

struct Student
{
	int ID;
	string name;
	int age;
	int score;
 } ;
 
 int main1127()
{
	//创建结构体变量
	//struct 结构体名 变量名；
	struct Student stu1;
	stu1.ID = 1;
	stu1.name = "张三";
	stu1.age = 18 ;
	stu1.score = 100;
	
	cout << "  学号" << stu1.ID << "  姓名" << stu1.name <<endl;
	
	//struct 结构体名 变量名；
	struct Student stu2={2,"张三",19,80}; 
	
	return 0;
}
