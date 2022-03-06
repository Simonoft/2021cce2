#include <bits/stdc++.h>
char tableA[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789"};
char tableB[]={"A   3  HIL JM O   2TUVWXY51SE Z  8 "};
char s[100];
int palindrome(){
	int k=strlen(s);
	for(int i=0;i<k;i++){
		if(s[i]!=s[k-i-1]) return 0;
	}
	return 1;
}
int main(){
	while(scanf("%s",s)!=EOF){
		int p= palindrome();
		if(p==0)
            printf("%s -- is not a palindrome.\n\n",s);
		else
			printf("%s -- is a regular palindrome.\n\n",s);
	}
}
