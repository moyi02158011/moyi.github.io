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
	printf("����������int�ͱ������硰12��34��\n");
	scanf("%d %d",&x,&y);
	printf("����ǰx��y��ֵ�ֱ�Ϊ��%d,%d\n",x,y);
	swap(&x,&y);
	printf("������x��y��ֵ�ֱ�Ϊ��%d,%d\n",x,y);
	return 0;
}*/
