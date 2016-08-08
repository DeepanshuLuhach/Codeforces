#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double pi=3.14159265359;
int main()
{
    int n;
    cin>>n;
    int mc=0,cc=0;
    for(int i=0;i<n;i++)
    {
        int m,c;
        cin>>m>>c;
        if(m>c)
            mc++;
        else if(m<c)
            cc++;
    }
    if(mc>cc)
        cout<<"Mishka";
    else if(mc<cc)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
}
