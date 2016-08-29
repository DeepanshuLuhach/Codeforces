
/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359

int main()
{
    ll n;
    cin>>n;
    ll f[n]={0},mx=0,mn=INT_MAX,mxc=0,mnc=0;
    for(ll i=0;i<n;i++)
    {
        cin>>f[i];

            if(f[i]>mx)
            {
                mx=f[i];
                mxc=1;
            }
            else if(f[i]==mx)
                mxc++;
            if(f[i]<mn)
            {
                mn=f[i];
                mnc=1;
            }
            else if(f[i]==mn)
                mnc++;

    }
    cout<<mx-mn;
    if(mx!=mn)
    cout<<" "<<mnc*mxc;
    else
        cout<<" "<<(mnc-1)*mxc/2;

}
