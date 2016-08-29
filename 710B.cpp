/************************************************\
*                                                *
* Submission By Deepanshu Luhach aka DragonFist  *
* Institution Name: Army Institute of Technology *
*                                                *
\************************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n]={0},i;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(n%2==1)
        cout<<a[n/2];
    else
    cout<<a[n/2-1];
}
