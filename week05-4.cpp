#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[40];
	int n;
	scanf("%d\n\n",&n);
	for(int i=1;i<=n;i++){
		if(i>1) cout<<endl;
		cout<<"這是第"<<i<<"筆資料"<<endl;
		while(gets(s)){
			if(s[0]==0) break;
		}
	}
}
