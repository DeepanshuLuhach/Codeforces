#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=n;i<s.length();i+=n)
    {
        if(s[i-1]==s[i-2]&&s[i-1]==s[i-3])
            d++;
    }
    cout<<d;
}
