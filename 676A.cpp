#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={0},maxm,minm;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            maxm=0;
            minm=0;
        }
        else
        {
            if(a[i]>a[maxm])
                maxm=i;
            if(a[i]<a[minm])
                minm=i;
        }
    }
    int d=abs(maxm-minm);
    if(abs(maxm-n+1)>d)
        d=abs(maxm-n+1);
    if(abs(minm-n+1)>d)
        d=abs(minm-n+1);
    if(maxm>d)
        d=maxm;
    if(minm>d)
        d=minm;
    cout<<d;

}
