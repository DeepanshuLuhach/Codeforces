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
    if(n<=2)cout<<n;
    else if(n%2==1) cout<<n*(n-1)*(n-2);
    else if(n%3==0) cout<<(n-1)*(n-2)*(n-3);
    else cout<<n*(n-1)*(n-3);
    return 0;
}

