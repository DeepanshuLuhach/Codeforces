/************************************************\
*                                                *
* Submission By Deepanshu Luhach aka DragonFist  *
* Institution Name: Army Institute of Technology *
*                                                *
\************************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;
    ll i,j;
    for(i=0;s[i]=='a'&&i<s.length();i++);
    if(i==s.length())
    {
        s[s.length()-1]='z';
    }
    else{
        for(j=i;s[j]!='a'&&j<s.length();j++)
        {
            s[j]--;
        }
    }
    cout<<s;

}
