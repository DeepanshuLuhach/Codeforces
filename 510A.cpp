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
    int n,m,f=1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        if(f==1)
            cout<<"#";
        for(int j=0;j<m-1;j++)
        {
            if(i%2==0)
                cout<<"#";
            else
                cout<<".";
        }
        if(f==-1)
            cout<<"#";
        if(i%2==0)
            f*=-1;
        cout<<endl;
    }
}
