/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef map<unsigned long long,unsigned long long> mp;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ull n,moves=0,min=INT_MAX,i=0;
    cin>>n;
    mp m1,m2;
    mp::iterator it,it1,it2;
    for(ull i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        it=m1.find(a);
        if(it!=m1.end())
            it->second++;
        else
            m1.insert(make_pair(a,1));
        it1=m2.find(b);
        if(it1!=m2.end()&&a!=b)
            it1->second++;
        else
        {   if(a!=b)
                m2.insert(make_pair(b,1));
            else
                m2.insert(make_pair(b,0));
        }
    }
    for(it=m1.begin(),it2=m2.begin();i<n;it++,it2++,i++)
    {
        if(it->second*2>=n&&it!=m1.end())
        {
            cout<<0;
            return 0;
        }
        else if(it->second*2<n&&it!=m1.end())
        {
           it1=m2.find(it->first);
           if(it1!=m2.end()&&(it1->second+it->second)*2>=n)
           {
               ll o=n-it->second*2;
               if(o%2==1)
                    o++;
               if(o<it1->second*2)
                moves=o/2;
               else
                moves=it1->second;
               if(moves<min)
                    min=moves;
           }
        else if(it2->second*2>=n&&it2!=m2.end())
        {
            ll o=n;
               if(o%2==1)
                    o++;
               if(o<it2->second*2)
                moves=o/2;
               else
                moves=it2->second;
               if(moves<min)
                    min=moves;
        }
        }
    }
    if(min==INT_MAX)
        cout<<-1;
    else
        cout<<min;

}
