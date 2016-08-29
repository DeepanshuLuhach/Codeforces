/*
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    int f=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            char c;
            cin>>c;
            if(c=='Y'||c=='M'||c=='C')
                {
                    f=1;break;
                }
        }
    }
    if(f==1)
        cout<<"#Color";
    else
        cout<<"#Black&White";

}

    ll n,m;
    cin>>n>>m;
    int f=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            char c;
            cin>>c;
            if(c=='Y'||c=='M'||c=='C')
                {
                    f=1;break;
                }
        }
    }
    if(f==1)
        cout<<"#Color";
    else
        cout<<"#Black&White";

}
