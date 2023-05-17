#include <bits/stdc++.h>
using namespace std;

struct point{double x,y;}p[25*25];
map<pair<double,double>,int>line;
int main(){
	int col=20,row=21;
	int cnt=0;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			p[cnt].x=i;p[cnt].y=j;cnt++;
		}
	int linesum = col+row;
	for(int i=0;i<cnt;i++)
		for(int j=0;j<cnt;j++)
		{
			if(p[i].x==p[j].x||p[i].y==p[j].y) continue;
			double k=(p[j].y-p[i].y)/(p[j].x-p[i].x);
			double b=(p[j].x*p[i].y-p[j].y*p[i].x)/(p[j].x-p[i].x);
			if(line[{k,b}]==0)
			{
				line[{k,b}]=1;
				linesum++;
			}
		}
	cout<<linesum<<endl;
	return 0;
}
	


