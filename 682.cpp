#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main()
{
    ull n;
    cin>>n;
    ull a[n]={0},mex;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    a[0]=1;
    mex=a[0]+1;
    for(int i=0;i<n;i++)
    {
            if(a[i]>mex)
            {
                a[i]=mex;
                mex++;
                //cout<<mex;
            }
            else if(a[i+1]>a[i]&&(i+1)!=n)
                mex++;
            else if(a[i]==mex&&i==n-1)
                mex++;
    }
    cout<<mex;
}
