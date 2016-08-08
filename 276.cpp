#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll max=0;
    for(ll i=0;i<n;i++)
    {
        ll f,t;
        cin>>f>>t;
        if(i==0)
        {
            if(t<=k)
                max=f;
            else
            {
                max=f-(t-k);
            }
        }
        else
        {
          if(t<=k&&max<f)
                max=f;
          else if(t>k&&max<(f-(t-k)))
            max=f-(t-k);
        }
    }
    cout<<max;
}
