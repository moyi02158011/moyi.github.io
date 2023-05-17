#include<iostream>
using namespace std;
void swap (char*a,char*b)
{
	char t=*a;
	*a=*b;
	*b=t;
}
int main (){
	int n;
	cin >> n;
	string s;
	int counts=0;
	int len;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		len=s.size();
		for (int i=0;i<len;i++)
		{
			if(s[i]=='I'&&s[i+1]!='L')
			swap(s[i],s[i+1]),counts++;
			if(s[len-1-i]=='U'&&s[len-2-i]!='K')
			swap(s[len-1-i],s[len-2-i]),counts++;
			if(s[i]=='I'&&s[i+1]=='L'&&s[i+2]!='K')
			swap(s[i+2],s[i+1]),swap(s[i],s[i+1]),counts+=2;
			if(s[len-1-i]=='U'&&s[len-2-i]=='K'&&s[len-3-i]!='L')
			swap(s[len-3-i],s[len-2-i]),swap(s[len-2-i],s[len-1-i]),counts+=2;
		}
		cout << counts << endl ;
		counts=0;
	}
	return 0;
}
