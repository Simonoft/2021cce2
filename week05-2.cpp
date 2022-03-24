#include <stdio.h>

int main(){
    int a[10]={8,9,1,2,3,4,5,7,6,0};

    for(int i=0;i<10-1;i++){
        for(int j=0;j<10-1;j++){
            if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
            }
        }

        for(int k=0;k<10;k++){
            printf("%d",a[k]);
        }
            printf("\n\n");
    }
}
