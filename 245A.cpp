#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1=0,a2=0,b1=0,b2=0;
    for(int i=0;i<n;i++)
    {
        int check,s,r;
        cin>>check;
        if(check==1)
        {
            cin>>s>>r;
            a1+=s;a2+=r;
        }
        else
        {
            cin>>s>>r;
            b1+=s;b2+=r;
        }
    }
    if(a1>=(a1+a2)/2)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
    if(b1>=(b1+b2)/2)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
}
