#include<stdio.h>

int main(){
	int i,j,k;
	char space=' ';
	char a[5]={'*','*','*','*','*'};
	for (i=1;i<=5;i++){
		for(j=0;j<=i;j++){
			printf("%c",space);
		}
		for(k=0;k<5;k++){
			printf("%c",a[k]);
		}
		printf("\n");
	}
	return 0;
}

/*void swap(int *a,int *b)
{
	int z=*a;
	*a=*b;
	*b=z;
}

int main()
{
	int x,y;
	printf("请输入两个int型变量，如“12，34”\n");
	scanf("%d %d",&x,&y);
	printf("交换前x和y的值分别为：%d,%d\n",x,y);
	swap(&x,&y);
	printf("交换后x和y的值分别为：%d,%d\n",x,y);
	return 0;
}*/
