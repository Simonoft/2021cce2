#include <bits/stdc++.h>

using namespace std;

int main()
{
    int grade[3];
    char names[3][10];
    for(int i=0;i<3;i++){
        scanf("%s%d",names[i],&grade[i]);
    }
    for(int i=0;i<3;i++){
        printf("%s %d\n",names[i],grade[i]);
    }
}
