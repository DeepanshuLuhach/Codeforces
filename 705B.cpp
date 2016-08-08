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
    ll n,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        sum=sum+a-1;
        if(sum%2==0)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
}
