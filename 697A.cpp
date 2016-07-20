#include<iostream>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int main()
{
    ll t,s,x,p;
    cin>>t>>s>>x;
    p=x-t;
    if(p>=s||p==0)
        (p)%s==0||(p)%s==1?cout<<"YES":cout<<"NO";
    else
        cout<<"NO";
    return 0;
}
