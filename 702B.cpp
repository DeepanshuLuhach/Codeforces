/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
typedef map<ll,ll> mp;
#define PI 3.14159265359

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    vl v;
    ll n,count=0;
    cin>>n;
    mp m;
    mp::iterator it,it1;
    for(int i=0;i<n;i++)
    {
        ll x;
        scanf("%I64d",&x);
        it=m.find(x);
        if(it!=m.end())
        {
            it->second++;
        }
        else
        {
            m.insert(make_pair(x,1));
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        ll p=log2((double)it->first);
        ll a=pow(2,++p);
        while(a<1000000000)
        {
            ll r=a-it->first;
            it1=m.find(r);
            if(it1!=m.end()&&distance(m.begin(),it1)>=distance(m.begin(),it))
            {
                if(r==it->first)
                    count+=(it1->second*(it1->second-1)/2);
                else
                    count+=(it->second*it1->second);
            }
            a=pow(2,++p);
        }
    }
    cout<<count;
}
