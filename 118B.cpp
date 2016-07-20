#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    { int w=n+1-i;
        std::cout<<std::setw(w);
        for(int j=0;j<=i;j++)
            std::cout<<std::right<<j;
        for(int j=i-1;j>=0;j--)
            cout<<j;
        cout<<endl;
    }
    for(int i=n;i>=0;i--)
    {
        int w=n-i+2;
        std::cout<<std::setw(w);
        for(int j=0;j<i;j++)
            std::cout<<std::right<<j;
        for(int j=i-2;j>=0;j--)
            cout<<j;
        cout<<endl;
    }
}
