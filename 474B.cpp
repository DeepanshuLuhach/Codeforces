/************************************************\
*                                                *
* Submission By Deepanshu Luhach aka DragonFist  *
* Institution Name: Army Institute of Technology *
*                                                *
\************************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359

void worm(ll a[],ll s, ll e,ll w)
{
    if(e>=s)
    {
        ll m=(s+e)/2;
        if((a[m-1]<w&&a[m]>w)||a[m]==w)
            cout<<m+1;
        else if(a[m]>w)
            worm(a,s,m-1,w);
        else if(a[m]<w)
            worm(a,m+1,e,w);
        else
            cout<<0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n+1]={0};
    cin>>a[0];
    for(ll i=1;i<n;i++)
    {
        ll t;
        cin>>t;
        a[i]=a[i-1]+t;
    }
    ll m;
    cin>>m;
    while(m)
    {
        ll t;
        cin>>t;
        worm(a,0,n-1,t);
        cout<<endl;
        --m;
    }
}
