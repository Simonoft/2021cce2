#include <iostream>

using namespace std;

class student{
	public:
		int grade;
		char name[30];
};

student stu[100];

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].grade;
	}
	for(int i=0;i<n;i++){
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
	}
}
