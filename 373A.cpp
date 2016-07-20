#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main()
{
    int k;
    cin>>k;
    int a[10]={0};
    for(int i=0;i<4;i++)
    {   char c[4];
        for(int j=0;j<4;j++)
        {
            cin>>c[j];
            if(c[j]!='.')
                a[c[j]-48]++;
        }
    }
    int f=0;
    for(int i=1;i<10;i++)
    {
        if(a[i]>k*2)
        {
            f=1;break;
        }
    }
    if(f==0)
        cout<<"YES";
    else
        cout<<"NO";

}


