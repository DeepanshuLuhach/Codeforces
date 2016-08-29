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
    getline(cin,s);
    int a[27]={0};
    if(s.length()>2)
    {
        int i=1,count=0;
        //cout<<s.length()<<endl;
        for(;i<s.length();i=i+3 )
        {
            a[s[i]-97]++;
            //cout<<i<<" "<<s[i]<<" "<<a[s[i]-97]<<endl;
        }
        for(i=0;i<27;i++)
            if(a[i]>0)
                {count++;//cout<<i<<endl;
                }
        cout<<count;
    }
    else
        cout<<0;
}
