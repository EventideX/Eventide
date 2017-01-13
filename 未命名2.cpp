#include<iostream>
using namespace std;
int main()
{
    int i,t,n,a[10];
    cin>>n;
    t=0;
    for (i=0;i<n;i++)
    if (a[i]==5) t=1;
    if (t==1) cout<<"Yes";
    else cout<<"No";
    return 0;
}
