#include <stdio.h>
#include <string.h>

char strA[]="XYZ";
char strB[]="ABC";
int main(){
    int c =strcmp("X","A");
    printf("X-A得到 %d\n",c);
    c =strcmp(strA,strB);
    printf("%s %s得到 %d\n",strA,strB,c);
    c =strcmp(strB,strA);
    printf("%s %s得到 %d\n",strB,strA,c);
}
