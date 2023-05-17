#include <stdio.h>
#include <stdlib.h>

int num[1000];
int ccc = 0;
int cout[1000];

void getsum(int n){
    int i,j;
    int p[n];
    int sum = 0;
    for(i = 0;i < n;i++) p[i] = 1;
    for(i = 2;i <= n;i++){
        if(p[i] == 0) continue;
        sum++;
        num[ccc++] = i;
        for(j = i;j <= n/i;j++){
            p[i*j] = 0;
        }
    }
}

int main() {
    int n = 0;
    int s;
    int i,j;
    scanf("%d",&n);
    getsum(n);
    
    
    for (int i = 0 ; i< ccc ; i++){
    	cout << num[i] << '---'; 
	}
    
    for(i = 0;i < n;i++){
        s = n - i;
        for(j = 0;j < ccc;j++){
            while(1){
                if(s % num[j] != 0) break;
                s = s / num[j];
                cout[j]++;
            }
        }
    }
    
    
    
    for(i = 0;i < ccc;i++){
        printf("%d %d\n",num[i],cout[i]);
    }
    return 0;
}
