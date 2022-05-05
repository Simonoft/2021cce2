#include <bits/stdc++.h>
#include <map>
#include <string>
using namespace std;
char line[100];
int main()
{
    int T;
    FILE *fin=fopen("hardwood.txt","r");
    fscanf(fin,"%d",&T);
    map<string,int>table;
    while(fgets(line,100,fin)){
        line[strlen(line)-1]=0;
        printf("Åª¨ì¤F= %s =\n",line);
        table[line]++;
    }
}
