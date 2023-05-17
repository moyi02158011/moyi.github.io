#include<iostream>
using namespace std;

struct Operators{
	string name;
	int a;
	int b;
	int c;
};

typedef struct Operators Op;

void swap(Op* a,Op *b)
{
	Op t=*a;
	*a=*b;
	*b=t;
}

int main(){
	Op staff[10010];
	int n;
	cin >> n;
	for (int i = 0 ;i<n;i++)
	{
		cin>>staff[i].name>>staff[i].a>>staff[i].b>>staff[i].c;
		for (int j=0;j<i;j++)
		{
			if(staff[i].a>staff[j].a||staff[i].a==staff[j].a&&staff[i].b>staff[j].b||staff[i].a==staff[j].a&&staff[i].b==staff[j].b&&staff[i].c>staff[i].c)
			swap(staff[i],staff[j]);
		}
	}
	for (int i=0;i<n;i++)
	cout<< staff[i].name << ' ' <<  staff[i].a << ' ' <<  staff[i].b << ' ' << staff[i].c << endl;
}
