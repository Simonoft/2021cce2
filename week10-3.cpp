#include <stdio.h>
#include <string.h>
class Student {
    public:
        char name[30];
        int grade;
};
Student student[101];
int main()
{
    FILE * fin =fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    for(int i=0;i<20;i++){
        fscanf(fin, "%s %d",student[i].name,&student[i].grade);
    }
    while(1){
        int flag=0;
        for(int i=0;i<N-1;i++){
            if(student[i].grade<student[i+1].grade){
                flag=1;
                Student temp;
                temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
        if(flag==0) break;
    }
        for(int i=0;i<N;i++)
        printf("%s %d\n",student[i].name,student[i].grade);
}
