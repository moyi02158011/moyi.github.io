#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,m;
vector<int>chosen;
int ans = 0; 
void calc(int x) {
	if( chosen.size()>m || chosen.size()+(n-x+1)<m) return ;//��֦ ѡ������ֶ���m�� ������ѡ�ļ�ʣ�µ����ֲ���m�� �Ͳ��ü���ѡ��ȥ�� 
	
	if(x==n+1){//�ݹ鵽n+1�� ǰ��û���أ�����ѡ����m���� �����m���� ���Ҽ�¼�𰸵ĸ����� 
		for(int i = 0; i < chosen.size();i++)
		printf("%d ",chosen[i]);
		cout << "\n" ;
		ans ++;
		return ; 
	}
	
	calc(x+1); //��һ������ѡ ������һλ 
	
	chosen.push_back(x+1);// ѡ��һ���� 
	calc(x+1); // ������һλ 
	chosen.pop_back();//�ָ��ֳ� 
	return ;
}
int main(){
	cin >> n >> m;
	calc(1);
	cout << ans ; 
	return 0;
}
