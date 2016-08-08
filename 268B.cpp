#include<iostream>
using namespace std;
typedef long int l;
static int p;
l press(l n)
{
    if(n==1)
        return 1;
    if(p>0)
        return 1+(n-1)*(++p)+press(--n);
    return n+(p++)+press(--n);
}
int main()
{
    l m,sum=0;
    cin>>m;
    sum=press(m);
    cout<<sum;
    return 0;
}
