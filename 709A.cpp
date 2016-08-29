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

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n,b,d,waste=0,c=0;
    cin>>n>>b>>d;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a>b) continue;
        waste+=a;
        if(waste>d)
        {
            waste=0;
            c++;
        }
    }
    cout<<c;
}
