#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n]={0},s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    s=s*2/n;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==s)
            {
                cout<<i+1<<" "<<j+1<<endl;
                a[i]=a[j]=0;
            }
        }
    }
}
