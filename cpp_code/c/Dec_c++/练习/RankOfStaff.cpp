#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 10010;
struct staff{
	string name;
	int a,b,c;
};

staff a[N];

bool cmp(struct staff x,struct staff y){
	if(x.a>y.a) return true;
	if(x.a==y.a&&x.b>y.b) return true;
	if(x.a==y.a&&x.b==y.b&&x.c>y.c) return true;
	if(x.a==y.a&&x.b==y.b&&x.c==y.c&&x.name[0]<y.name[0]) return true;
	return false;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> a[i].name;
		scanf("%d%d%d",&a[i].a,&a[i].b,&a[i].c);
	}
	sort(a,a+n,cmp);
	for(int i = 0;i<n;i++){
		cout << a[i].name ;
		printf(" %d %d %d\n",a[i].a,a[i].b,a[i].c);
	}
	return 0;
}
