#include <stdio.h>
#include <string.h>

char line[2000];
int main(){
    printf("½Ð¿é¤J¦r¦ê: ");
    scanf("%s",line);
    for(int i=0;i<2000;i++){
        if(line[i]=='2') printf("§ä¨ì2\n");
    }

    return 0;
}
