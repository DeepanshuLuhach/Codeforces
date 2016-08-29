/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
typedef map<unsigned long long,unsigned long long> mp;
#define PI 3.14159265359

int main()
{
    ull n,moves=0;
    cin>>n;
    mp m1,m2;
    mp::iterator it,it1;
    for(ull i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        it=m1.find(a);
        if(it!=m1.end())
        {
            it->second++;
        }
        else
        {
            m1.insert(make_pair(a,1));
        }
        it1=m2.find(b);
        if(it1!=m2.end())
        {
            it1->second++;
        }
        else
        {
            m2.insert(make_pair(b,1));
        }
    }
    for(it=m1.begin();it!=m1.end();it++)
    {
        if(it->second*2>=n)
        {
            cout<<moves;
            return 0;
        }
        else
        {

           it1=m2.find(it->first);

           if(it1!=m2.end()&&(it1->second+it->second)*2>=n&&(distance(m1.begin(),it)!=distance(m2.begin(),it1)))
           {
               moves+=it1->second;
               cout<<moves;
               return 0;
           }

        }
    }
    cout<<-1;

}
