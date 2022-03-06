#include <stdio.h>
#include <string.h>

char tableA[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789"};
char tableB[]={"A   3  HIL JM O   2TUVWXY51SE Z  8 "};
char mirrored(char c){
	for(int i=0;i<strlen(tableA);i++) if(tableA[i]-c==0) return tableB[i];
	return ' ';
}
char c;
int main(){
	scanf("%c",&c);
	printf("Ãè¹³¦r¤¸¬°--%c--\n",mirrored(c));
}
