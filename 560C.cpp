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
    ll a1,a2,a3,b1,b2,b3,a,b;
    cin>>a>>b;
    a3=min(a,b);
    b3=max(a,b);
    cin>>a>>b;
    a1=min(a,b);
    b1=max(a,b);
    cin>>a>>b;
    a2=min(a,b);
    b2=max(a,b);
    if((a3>=a1+a2&&b3>=max(b1,b2))||(a3>=a1+b2&&b3>=max(a2,b1))||(a3>=a2+b1&&b3>=max(a1,b2)))
       cout<<"YES";
    else if((b3>=a1+a2&&a3>=max(b1,b2))||(b3>=a1+b2&&a3>=max(a2,b1))||(b3>=a2+b1&&a3>=max(a1,b2)))
       cout<<"YES";
    else if((a3>=b1+b2&&b3>=max(a1,a2))||(a3>=b1+a2&&b3>=max(b2,a1))||(a3>=b2+a1&&b3>=max(b1,a2)))
        cout<<"YES";
    else if((b3>=b1+b2&&a3>=max(a1,a2))||(b3>=b1+a2&&a3>=max(b2,a1))||(b3>=b2+a1&&a3>=max(b1,a2)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
