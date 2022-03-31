#include <bits/stdc++.h>
using namespace std;

char tree[100000][40];
int compare(const void*p1,const void*p2){
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main(){
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++){
		int n=0;
		while(gets(tree[n])){
			if(tree[n][0]==0){
				break;
			}
			n++;
		}
		if(t>1) cout<<endl;
		qsort(tree,n,40,compare);
		int combo=1;
		printf("%s ",tree[0]);
		for(int i=1;i<n;i++){
			if(strcmp(tree[i-1],tree[i])==0)combo++;
			else{
				printf("%.4f\n",100.0/n*combo);
				printf("%s ",tree[i]);
				combo=1;
			}
		}
		printf("%.4f\n",100.0*combo/n);
	}
}
