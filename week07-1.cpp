#include <stdio.h>
#include <string.h>
char list[2000][80];

int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(list[i]);
	}
	for(int i=0;i<n;i++){
		printf("%s\n",list[i]);
	}
}
