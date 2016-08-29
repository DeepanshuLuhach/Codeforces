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
    int n,p,q,l[105]={0},a,i;
    cin>>n>>p;
    for( i=0;i<p;i++)
    {
        cin>>a;
        l[a]=1;
    }
    cin>>q;
    for( i=0;i<q;i++)
    {
        cin>>a;
        l[a]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(l[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
