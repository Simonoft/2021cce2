#include <stdio.h>
#include <string.h>//strcpy();
#include <iostream>
using namespace std;

char name[100][20];

int main(){
	int n;
	int grade[100];
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%s %d",name[i],&grade[i]);
	}
	while(1){
		int flag=0;
		for(int i=0;i<n-1;i++){
			if(grade[i]<grade[i+1]){
				flag=1;
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				char tempchar[20];
				strcpy(tempchar,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],tempchar);
			}
		}
		if(flag==0)break;
	}
	for(int i=0;i<n;i++){
		printf("%s %d\n",name[i],grade[i]);
	}

}
