#include<stdio.h>

void f(int n)
	{
		if(n%3==0&&n%5==0)
		printf("%d\t",n);
		
	}
int main()
{
	
	int a[3][3]={80,68,81,70,76,75,78,87,56};
	int sum1[3];
	int sum2[3];
	int i =0,j=0;
	for ( i = 0; i<3; i++)
	{
		for (j=0;j<3;j++)
		sum1[i]+=a[i][j];
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		sum2[j]+=a[i][j];
	}
	int max =0;
	for ( i = 0; i<3; i++)
	{
		max=max>sum1[i]?max:sum1;
	}
	printf("%d %d %d\n",sum1[0],sum1[1],sum1[2]);
	printf("%d %d %d\n",sum2[0],sum2[1],sum2[2]);
	printf("%d\n",max);
    return 0;
}
