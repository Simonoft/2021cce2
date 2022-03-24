  #include <stdio.h>
#include <stdlib.h>

int comp(const void *p1,const void *p2){
    int c1=*(int*)p1,c2=*(int*)p2;
    if(c1>c2) return 1;
    if(c1<c2) return -1;
    if(c1==c2) return 0;
}


int main(){
    int n=50;
    int a[n];
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
            printf("\n\n\n");
    qsort(a,n,sizeof(int),comp);
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
            printf("\n");
}
