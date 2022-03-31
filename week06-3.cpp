#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
char words[10000][50];

int compare(const void*p1,const void*p2){
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main(){
	int n;
	scanf("%d\n\n",&n);
	for(int i=0;i<n;i++){
		cin>>words[i];
	}
		qsort(words,n,50,compare);
	for(int i=0;i<n;i++){
		cout<<words[i]<<endl;
	}
	
}
