#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

class student{
	public:
		int grade;
		char name[30];
};
bool comp(student a,student b){
	return (a.grade>b.grade);
}
int main(){
	int n;
	scanf("%d",&n);
	vector<student> stu(n);
	for(int i=0;i<n;i++){
		scanf("%s %d",stu[i].name,&stu[i].grade);
	}
	stable_sort(stu.begin(),stu.end(),comp);
	for(int i=0;i<n;i++){
		printf("%s %d\n",stu[i].name,stu[i].grade);
	}

}
