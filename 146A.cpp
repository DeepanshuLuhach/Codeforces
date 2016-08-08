#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]!='4'&&s[i]!='7')
            f=0;
    }
    if(f==1)
    {
        long int sum1=0,sum2=0;
        for(int i=0,j=n/2;i<n/2;i++,j++)
        {
            sum1+=(s[i]-48);
            sum2+=(s[j]-48);
        }
        if(sum1==sum2)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
