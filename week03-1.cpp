#include <stdio.h>
#include <String.h>

char line[2000];
int palindrome(){
	int Length= strlen(line);
	for(int i=0;i<Length;i++){
		if(line[i]!=line[Length-i-1]) return 0;
	}
	return 1;
}


int main(){
	while(scanf("%s",line)!=EOF){
		int p=palindrome();
		if(p==1) printf("%s -- is a regular palindrome.\n",line);
		if(p==0) printf("%s -- is not a palindrome.\n",line);
	}
}
