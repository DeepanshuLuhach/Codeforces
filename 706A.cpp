/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359

int main()
{
    int n;
    int x,y;
    cin>>x>>y>>n;
    int a[n][3]={0};
    double t=INT_MAX,d=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        d=sqrt(pow(abs(a[i][0]-x),2)+pow(abs(a[i][1]-y),2));
        double tm= d/a[i][2];
        if(tm<t)
            t=tm;
    }
    cout<<fixed<<setprecision(20)<<t;
}
