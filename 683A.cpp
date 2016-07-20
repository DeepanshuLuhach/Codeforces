#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,y,p=0;
    cin>>a>>x>>y;
    if((x<a&&x>0)&&(y<a&&y>0))
        p=0;
    else if((x<0||y<0)||(x>a||y>a))
        p=2;
    else
        p=1;
    cout<<p;
}
