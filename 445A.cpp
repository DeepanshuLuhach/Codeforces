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
    int i,j,n,m;
    cin>>n>>m;
    char c[n][m];
    int f=-1;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>c[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            f*=-1;
            if(c[i][j]=='.')
            {
                if(f==1)
                    c[i][j]='W';
                else
                    c[i][j]='B';
            }
            cout<<c[i][j];
        }
        if(m%2==0)
            f*=-1;
        cout<<endl;
    }

}
