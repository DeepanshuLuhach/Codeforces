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
    int f=1;
    int n;
    cin>>n;
    for(int i=0;i<n;)
    {
        if(f==1)
            cout<<"I hate ";
        else
            cout<<"I love ";
        f=f*(-1);
        i++;
        if(i<n)
            cout<<"that ";
    }
    cout<<"it";
}
