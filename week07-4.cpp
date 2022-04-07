#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char list[2000][80];

int compare (const void *p1,const void *p2){
	return strcmp((char *)p1,(char *)p2);
}

int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%s",list[i]);
		char others[80];
		gets(others);
	}
	qsort(list,n,80,compare);
	for(int i=0;i<n;i++){
		printf("%s\n",list[i]);
	}
}
