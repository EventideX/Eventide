#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t,a[10];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
    if (a[i]>a[j])      //´Ó´óµ½Ð¡Îªa[i]<a[j]
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    return 0;
}
