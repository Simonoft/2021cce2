#include <stdio.h>
#include <string.h>

int main(){
	char line[2000];
	for(int i=0;i<4;i++){
		int ans=0;
		for(int i=0;i<strlen(line);i++){
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
	}
}
