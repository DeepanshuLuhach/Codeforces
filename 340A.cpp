/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359
ll lcm(ll x,ll y)
{
    ll max=x>y?x:y;
    ll i=1;
    while(1)
    {
        if((max*i)%y==0&&(max*i)%x==0)
            return max*i;
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll a,b,x,y,t=0,l;
    cin>>x>>y>>a>>b;
    l=lcm(x,y);
    a=l*ceil((double)a/l);
    b=l*floor((double)b/l);
    t=(b-a)/l+1;
    cout<<t;
}
