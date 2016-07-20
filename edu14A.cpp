#include<iostream>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;

    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            f++;
    }
    if(n==1&&a[0]==1)
    {
        cout<<"YES";
    }
    else if(n==1&&a[0]==0)
        cout<<"NO";
    else if(f==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
