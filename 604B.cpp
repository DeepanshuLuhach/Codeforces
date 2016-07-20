#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll s[n];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ll mx=s[n-1];
    for(ll i=n-k,j=n-k-1;i<n&&j>=0;i++,j--)
    {
        if(mx<s[i]+s[j])
            mx=s[i]+s[j];
    }
    cout<<mx;
}
