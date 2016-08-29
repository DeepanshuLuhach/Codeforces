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
    ll ex,nb,teams=0;
    cin>>ex>>nb;
    if(ex!=0&&nb!=0)
        teams=(ex+nb)/3;
    if(teams>min(ex,nb))
        teams=min(ex,nb);
    cout<<teams;
}
