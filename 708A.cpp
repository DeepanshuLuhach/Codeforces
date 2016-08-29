#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double pi=3.14159265359;
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n,b,d,cnt=0,t=0,z;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        if(z<=b)
        {
            t+=z;
            if(t>d)
            {
                t=0;
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
