#include<iostream>
#include<cstdio>
using namespace std;
int mian()
{
    int t;
    char a;
    a=getchar();
    t=0;
    while (a!=EOF)
    {
        if (a=='\n') t++;
        a=getchar();
    }
    cout<<t;
    return 0;
}
