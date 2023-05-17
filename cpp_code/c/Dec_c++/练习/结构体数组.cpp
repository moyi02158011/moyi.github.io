#include<iostream>
using namespace std;

struct Student
{
	int ID;
	string name;
	int age;
	int score;
 } ;
 
int main11227(void)
{
	int arr[]={1,2,3};
	struct Student stu[3] =
	{
		{1,"张三",18,90},
		{2,"李四",18,95},
		{3,"王五",17,80} 
	}; 
	
	cout << sizeof (stu) <<endl;
	
	for (int i=0;i<sizeof(stu)/sizeof(stu[0]);i++ )
	{
		cout << " 学号："<< stu[i].ID <<", 姓名："<< stu[i].name
		<<", 年龄："<< stu[i].age <<", 分数："<< stu[i].score << endl ;
	}
	
	return 0;
} 

