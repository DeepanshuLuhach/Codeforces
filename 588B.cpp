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
    ll ln=1,n,fact=1;
    cin>>n;
    while (n%2 == 0)
    {
        fact=2;
        n = n/2;
    }
    ln*=fact;
    fact=1;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            fact=i;
            n = n/i;
        }
        ln*=fact;
        fact=1;
    }

    if (n > 2)
        ln=ln*n;

    cout<<ln;
}
