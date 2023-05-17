#include<iostream>
using namespace std;

bool is_leap(int y){
	if(y%400==0||y%4==0&&y%100!=0)return true;
	return false;
}

bool date_is_true(int y,int m,int d){
	int monthDays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(is_leap(y))monthDays[2]=29;
	if(m>12||m<1)return false;
	if(d>monthDays[m])return false;
	return true;
}

int main(){
	int y,m,d;
	scanf("%4d%2d%2d",&y,&m,&d);
	int m1,d1;
	int ans1=0,ans2=0;
	for(int i=y;y<10000;y++)
	{
		m1=y%10*10+y/10%10;
		d1=y/1000+y/100%10*10;
		if(date_is_true(y,m1,d1)==false)continue;
		if((m<m1||m==m1&&d<d1)&&ans1==0)ans1=y*10000+m1*100+d1;

		if(ans1!=0&&(y%10!=y/10%10)&&(y/1000==y/10%10)&&(y/100%10==y%10))
		ans2=y*10000+m1*100+d1;
		if(ans1!=0&&ans2!=0)break;
	}
	cout << ans1 << endl << ans2 << endl ;
	return 0;
}
