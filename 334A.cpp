#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int j=1,k=n*n;
    for(int i=0;i<n;i++)
    {   int cnt=0;
        for(;cnt<n/2;cnt++)
        {
            cout<<j<<" ";
            j++;
        }
        k=k-(n/2)+1;
        /*k-=n/2;
        k++;*/
        cnt=0;
        for(;cnt<n/2;cnt++)
        {
            cout<<k<<" ";
            k++;
        }
        k=k-(n/2)-1;
        /*k-=n/2;
        k--;*/
        cout<<endl;
    }
}
