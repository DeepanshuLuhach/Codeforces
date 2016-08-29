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
    string s,q;
    cin>>q;
    s=q;
    int flag1=0,flag2=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97&&s[i]<=122&&i==0)//lowercase
            {
                s[i]-=32;
                flag2=1;
            }
        else if(s[i]>=65&&s[i]<=90&&i!=0)//uppercase
            {
                s[i]+=32;
                flag1++;
            }
        else if(s[i]>=65&&s[i]<=90&&i==0)
        {
            s[i]+=32;
            flag1++;
        }
    }
    if(flag1==q.length()||(flag1==(q.length()-1)&&flag2==1))
        cout<<s;
    else
        cout<<q;
}
