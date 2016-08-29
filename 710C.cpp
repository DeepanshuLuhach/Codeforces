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
    int n;
    scanf("%d",&n);
    int e=2,o=1,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i<=n/2&&(j>=n/2-i&&j<=n/2+i))||(i>n/2&&(j>=i-n/2&&j<=(3*n)/2-i-1)))
            {
                cout<<o<<" ";
                o+=2;
            }
            else
            {
                cout<<e<<" ";
                e+=2;
            }
        }
        cout<<endl;
    }
}
