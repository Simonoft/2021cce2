#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> v;
    int a;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(int i=0;i<3;i++){
        cout<<v[i]<<endl;
    }
}
