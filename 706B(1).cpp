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
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    vl v;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll m,x;
	cin>>m;
	for (ll i = 0; i <m; ++i)
	{
		cin>>x;
		ll t=upper_bound(v.begin(),v.end(),x)-v.begin();
		cout<<t<<endl;
	}
	return 0;
}

