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
		{1,"����",18,90},
		{2,"����",18,95},
		{3,"����",17,80} 
	}; 
	
	cout << sizeof (stu) <<endl;
	
	for (int i=0;i<sizeof(stu)/sizeof(stu[0]);i++ )
	{
		cout << " ѧ�ţ�"<< stu[i].ID <<", ������"<< stu[i].name
		<<", ���䣺"<< stu[i].age <<", ������"<< stu[i].score << endl ;
	}
	
	return 0;
} 

