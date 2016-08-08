#include<bits/stdc++.h>
using namespace std;
typedef long int l;
int main()
{
    int m,n;
    cin>>n>>m;
    int a[n]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int s=0;
    for(int i=0;i<m;i++)
        {   if(a[i]<0)
                s+=a[i];
            else
                break;
        }
    cout<<-1*s;
}
