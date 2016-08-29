/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll n,m,press=0;
	cin>>n>>m;
    while(1)
    {
        if(n==m)
            break;
        else if(n>m)
        {
            press+=(n-m);
            break;
        }
        else if(m%2==0)
            m=m/2;
        else
            m++;
        press++;
    }
    cout<<press;
	return 0;
}
