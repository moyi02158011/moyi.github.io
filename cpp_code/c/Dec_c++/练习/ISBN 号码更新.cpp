#include <iostream>
using namespace std;

int code (int a,int b,int c)
{
	return (a+b%10*4+b/10%10*3+b/100*2+c/10000*5+c/1000%10*6+c/100%10*7+c/10%10*8+c%10*9)%11;
}

/*int main(){
	int a,b,c,d;
	scanf("%d-%d-%d-%d",&a,&b,&c,&d);
	if(code(a,b,c)==d||code(a,b,c)==10&&d=='X')
	{
	cout << "Right";
	}
	else
	{
	if(code(a,b,c)<10)
	printf("%d-%03d-%05d-%d",a,b,c,code(a,b,c));
    else
		printf("%d-%03d-%05d-X",a,b,c);
	}
	return 0;
}*/
int main(){
	char s[15];
	gets(s);
	int sum=0;
	int j=1;
	for (int i=0;i<=10;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
		sum=sum+(s[i]-'0')*j;
		j++;
		}
	}
	sum%=11;
	if(sum==10&&s[12]=='X')
		cout<<"Right";
	else if(sum==10&&s[12]!='X')
	{
		s[12]='X';
		for(int i=0;i<=12;i++)
		printf("%c",s[i]);
	}
	else if(sum==s[12]-'0')
	{
		cout<<"Right";
	}
	else
	{
		for(int i=0;i<=11;i++)
		printf("%c",s[i]);
		printf("%d",sum);
	}
	return 0;
}
