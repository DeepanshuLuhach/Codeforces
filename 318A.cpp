#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,k,m;
    scanf("%I64d %I64d",&n,&k);
    k--;
    //cout<<k<<endl;
    if(n%2==1)
        m=n/2+1;
    else
        m=n/2;
        //cout<<m<<endl;
    if(k<m)
    {
        cout<<2*k+1;
    }
    else
    {
        cout<<(k-m+1)*2;
    }
}
