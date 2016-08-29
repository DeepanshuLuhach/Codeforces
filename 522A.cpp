/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359

int main()
{
    int n;
    cin>>n;
    string s1[n],s2[n];
    int cm=2,c=2;
    for(int i=0;i<n;i++)
    {   string c;
        cin>>s1[i]>>c>>s2[i];
        transform(s1[i].begin(),s1[i].end(),s1[i].begin(),::tolower);
        transform(s2[i].begin(),s2[i].end(),s2[i].begin(),::tolower);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s1[i]==s2[j])
            {cm++;j=n;}
        }
    }
    cout<<cm;
}
