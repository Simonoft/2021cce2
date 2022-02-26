#include <stdio.h>
#include <string.h>

int main(){
	char line[2000];
	int total=0;
	while(scanf("%s",line)!=EOF){
		int ans=0;
		for(int i=0;i<strlen(line);i++){
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		total+=ans;
	}
	printf("Total: %d\n",total);
}
