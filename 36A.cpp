#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int n,k=0;
    cin>>n;
    char s[n];
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=='1')
            {
                a[k]=i;
                k++;
            }
    }
    int z[k-1]={0};
    for(int i=0;i<k-1;i++)
        z[i]=a[i+1]-a[i];
    for(int i=0;i<k-2;i++)
        if(z[i+1]!=z[i])
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";

}
