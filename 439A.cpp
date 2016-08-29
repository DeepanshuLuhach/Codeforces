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
    int n,d,t=0;
    cin>>n>>d;
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         t+=a[i];
    }
    if((n-1)*10<d)
    {
        int j=0;
        t+=(n-1)*10;
        j=2*(n-1);
        if(t>d)
         {
             cout<<-1;
             return 0;
         }
        else
        {
            j+=(d-t)/5;
            cout<<j;
        }
    }
    else
        cout<<-1;
}
