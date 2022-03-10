#include <stdio.h>

char line[2000];
int main(){
	int t=1;
	while(gets(line)){
		int asc[256]={0};
		if(t>1) printf("\n");
		for(int i=0;line[i]!=0;i++){
			char c= line[i];
			asc[c]++;
		}
		for(int i=0;i<256;i++){
			if(asc[i]>0) printf("%d %d\n",i,asc[i]);
		}
		t++;
	}
}
