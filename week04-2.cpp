#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[1002];
	int t=1;
	while(gets(str)){
		if(t>1) cout<<endl;
		char count[256]={};
		for(int i=0;str[i]!=0;i++){
			count[str[i]]++;
		}
		for(int i=1;i<100;i++){
			for(int c=127;c>=32;c--){
				if(count[c]==i)printf("%d %d\n",c,count[c]);
			}
		}
		t++;
	}
}
