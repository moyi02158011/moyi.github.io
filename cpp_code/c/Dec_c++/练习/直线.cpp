#include<iostream>
using namespace std;
int main(){
	int sum=20;
	for (int k=0;k<19;k++)
	{
		for (int i=k;i<19;i++)
		{
			for(int j=k+1;j<21;j++)
			{
				if(i!=j)
				sum++;
			}
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
