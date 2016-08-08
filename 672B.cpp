#include<bits/stdc++.h>
using namespace std;
typedef long int l;
int main()
{
    l n,sum=0;
    cin>>n;
    l a[26]={0};
    string s;
    cin>>s;
    if(n>26)
    {
        cout<<"-1";
        return 0;
    }
    for(l i=0;i<n;i++)
    {
        a[s[i]-97]++;
    }
    for(l i=0;i<26;i++)
    {
        if(a[i]>26)
        {
            cout<<"-1";
            return 0;
        }
        else if(a[i]>1)
        {
           sum=sum+a[i]-1;
        }
    }
    cout<<sum;
}
