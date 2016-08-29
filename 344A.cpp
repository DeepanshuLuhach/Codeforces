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
    ll n,c=1;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=a[i-1])
            c++;
    }
    cout<<c;
}
