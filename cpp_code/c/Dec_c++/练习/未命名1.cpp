#include<iostream>
using namespace std;


int main(){
	int res=0;
	for (int n=0;n<=9;n++)
		for (int m=0;m<=9;m++)
		{
			if(n==m)
			continue ;
			int a=0,b=0,c=0;
			for (int i=0;i<4;i++)
			{
				int num[4];
				for(int j=0;j<4;j++)
				if(i==j)
				num [j]=m;
				else 
				num [j]=n;
				int sum=num[0]*1000+num[1]*100+num[2]*10+num[3];
				a++;
				int y=sum/100,m=sum%100;
				if(y>=1&&y<=12&&m>=1&&m<=30)
				b++;
				if(y>=0&&y<=23&&m>=0&&m<=59)
				c++;
			}
			res+=a*b*c;
		}
	
	cout << res << endl ;
	return 0;
}
