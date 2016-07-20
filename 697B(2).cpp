#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main()
{
    string d;
    cin>>d;
    ull len=d.length(),i;
    //cout<<len<<endl;
    for(i=len-1;d[i]!='e';i--);
    ull power=0;
    //cout<<i<<endl;
    for(ull j=i+1;j<len;j++)
    {
        power+=(d[j]-48)*pow(10,len-j-1);
        //cout<<d[j]<<"\t"<<d[j]-48<<endl;
    }
    //cout<<power;

}
