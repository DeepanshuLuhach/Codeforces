/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
typedef map<ll,ll> mp;
#define PI 3.14159265359
mp parseInts(string str) {

    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==',')
            count++;
    }
    stringstream ss(str);
    int a;
    mp v;
    for(int i=0;i<=count;i++)
    {
        char c;
        ss>>a>>c;
        v.insert(make_pair(a,1));

    }
    return v;
}
int main()
{
    mp m;
    string s;
    cin>>s;
    m=parseInts(s);
    int f=0;
    mp::iterator it=m.begin(),it1;
    if(m.size()==1)
    {
        cout<<it->first;
        return 0;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        it1=it;
        ++it1;

        if(it->first+1==it1->first&&f==0)
        {
            cout<<it->first<<"-";
            f=1;
        }
        else if((it1)==m.end())
        {
            cout<<it->first;
            return 0;
        }
        else if(it->first+1!=it1->first&&f==1)
        {
            cout<<it->first<<",";
            f=0;
        }

        else if(it->first+1!=it1->first)
        {
            cout<<it->first<<",";
        }
    }
}
