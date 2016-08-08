#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int main()
{
    ull n,k,h;
    cin>>n>>h>>k;
    ull a[n]={0},i,t=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ull s=0;
    i=0;
    while(1)
    {
        int f=1;
        for(;s<h&&f==1;i++)
        {
            if((s+a[i])<=h)
            {
                s+=a[i];
            }
            else
            {
                f=0;
                i--;
            }
        }
        if(s>=k)
        {
            s-=k;
            t++;
        }
        else if(s<k)
        {
            s=0;
            t++;
        }

        if(s==0&&i==n)
            break;
    }
    cout<<t;
}
