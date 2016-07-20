#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

int main()
{
    ull n, m, count=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        ull s=5-(i%5);
        /*for(int j=s;j<=m;j+=5)
            count++;*/
        if(m>=s)
            count+=(m-s)/5+1;
    }
    cout<<count;
}
