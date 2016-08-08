#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n;
    cin>>n>>m;
    ll a[m]={0};
    for(int i=0;i<m;i++)
        cin>>a[i];
    ll s=0,f=1;
    for(int i=0;i<m;i++)
    {
       if(a[i]>f)
       {
           s=s+a[i]-f;
           f=a[i];
       }
       else if(a[i]<f)
       {
           s=s+n-f+a[i];
           f=a[i];
       }
    }
    cout<<s;
}
