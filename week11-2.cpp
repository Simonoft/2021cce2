#include <bits/stdc++.h>

using namespace std;
char line[100];

int main()
{
    int T;
    FILE *fin=fopen("hardwood.txt","r");
    fscanf(fin,"%d",&T);
    cout<<"你讀到了T: "<<T<<endl;
    while(fgets(line,100,fin)){//fgets 會保留跳行, gets 則不會.
        printf("讀到了= %s =\n",line);
    }
}
