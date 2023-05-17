#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t ;
	int n;
	int count=0;
	char s1[500];
	for(int i=1;i<=t;i++)
	{
		cin >> n ;
		scanf("%s",s1);
		for (int j=0;j<n;j++)
		{
			if(s1[j]=='Q')
			count++;
			else 
			count--;
			if (count <0)
			count = 0;
			}
		if (count ==0)
			cout << "Yes" <<endl;
		else
		 	cout << "No" <<endl;
		count = 0;
		}
	return 0;
}
