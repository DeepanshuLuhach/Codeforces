/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359
typedef map<string, int> mp;
typedef vector<string> vs;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int max=-1001,n;
    string w;
    cin>>n;
    mp a;
    vs p;
    for(int i=0;i<n;i++)
    {
        string nm;
        int x;
        cin>>nm>>x;
        mp::iterator it = a.find(nm);
        if(it==a.end())
        {
            p.push_back(nm);
            a.insert(make_pair(nm,x));
            if(x>max)
            {
                max=x;
                w=nm;
            }
        }
        else
        {
            it->second+=x;
            if(it->second>max)
            {
                max=it->second;
                w=nm;
            }
        }
    }
    mp::iterator it =a.find(w);
    if(it->second!=max)
     {
         /*for(int i=0;i<p.size();i++)
        {
            mp::iterator it =a.find(p[i]);
            if(it->second>max)
                {
                    max=it->second;
                    w=it->first;
                }
        }*/
         it =a.begin();
         max=it->second;
         w=it->first;
         it++;
        for(;it!=a.end();it++)
        {
            if(it->second>max)
            {
                max=it->second;
                w=it->first;
            }
            if(it->second==max)
            {
                vs::iterator i=find(p.begin(),p.end(),it->first);
                vs::iterator j=find(p.begin(),p.end(),w);
                if(i<j)
                {
                   max=it->second;
                    w=it->first;
                }
            }
        }
     }
    cout<<w;
}
