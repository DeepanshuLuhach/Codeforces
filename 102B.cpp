#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll pass=0;
    while(s.size()!=1)
    {
        ll sum=0;
        for(ll i=0;i<s.size();i++)
        {
            sum=sum+s[i]-48;
        }
        //s = string(itoa(sum,&s[0],10));
        pass++;
        stringstream ss;
        ss << sum;
        s = ss.str();

    }
    cout<<pass;
}
