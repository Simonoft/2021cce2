#include <stdio.h>
#include <string.h>

char line[2000];
int main(){
    printf("�п�J�r��: ");
    scanf("%s",line);
    for(int i=0;i<2000;i++){
        if(line[i]=='2') printf("���2\n");
    }

    return 0;
}
