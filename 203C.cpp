/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
typedef pair<long,long> pl;
#define PI 3.14159265359

int main()
{
    ll n,d,l,h;
    cin>>n>>d>>l>>h;
    ll a,b;
    pl p[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        p[i].first=a*l+b*h;
        p[i].second=i+1;
    }
    sort(p,p+n);
    ll sum=0;
    vl v;
    for(ll i=0;i<n;i++)
    {
        if(sum+p[i].first<=d)
        {
            sum+=p[i].first;
            v.push_back(p[i].second);
        }
        else
            break;
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
