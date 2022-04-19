#include <stdio.h>
int main(){
    FILE* fout = fopen("filenameWithWeek08-4.txt","w+");
    fprintf(fout,"Hello, I'm here.");
    printf("Hello World\n");
}
