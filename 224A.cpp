#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main()
{
ull b,h,l,x,y,z;
cin>>x>>y>>z;
l=sqrt(z*y/x);
b=sqrt(y*x/z);
h=sqrt(x*z/y);
cout<<4*(l+b+h);
}

