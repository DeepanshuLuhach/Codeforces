
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double pi=3.14159265359;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll c[n]={0},cost=0,csum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
        csum+=c[i];
        if(i!=0)
        {
            cost=cost+c[i]*c[i-1];
        }
    }
        cost+=c[0]*c[n-1];
    ll a[k]={0};
    for(ll i=0;i<k;i++)
    {   cin>>a[i];a[i]--;}

    ll t =csum,s;
    for(ll i=0;i<k;i++)
    {   csum=t;
        if(a[i]==0)
        {
            csum=csum-c[0]-c[1]-c[n-1];
        }
        else if(a[i]==n-1)
            csum=csum-c[n-1]-c[0]-c[n-2];
        else
            {
                csum=csum-c[a[i]-1]-c[a[i]+1]-c[a[i]];
            }
        cost=cost+c[a[i]]*csum;
        //t=t-c[a[i]];
    }
    if(k>1)
    {
        for(ll i=0;i<k-1;i++)
    {
        s=c[a[i]]*c[a[i+1]];
    }
    cost-=s;
    }
    cout<<cost;
}
