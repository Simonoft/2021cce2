#include <stdio.h>

int main(){
    int a[10]={8,9,1,2,3,4,5,7,6,0};

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        }

        for(int k=0;k<10;k++){
            printf("%d",a[k]);
        }
            printf("\n");
    }
}
