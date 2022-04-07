#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char list[2001][80];

int compare (const void *p1,const void *p2){
	return strcmp((char *)p1,(char *)p2);
}

int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%s",list[i]);
		char others[75];
		gets(others);
	}
	
	qsort(list,n,80,compare);
	int combo=1;
	
	for(int i=0;i<n;i++){
		if(strcmp(list[i],list[i+1])==0)
			combo++;
		else{
			printf("%s %d\n",list[i],combo);
			combo=1;
		}
	}
}
