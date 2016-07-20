#include<iostream>

using namespace std;

int main()
{
    int n=0;
    long long int c=0,x,total=0;
    cin>>n>>x;
    total=x;
    for(int i=0;i<n;i++)
    {
        char sign;
        long long int d;
        cin>>sign>>d;
        if(sign=='+')
            total+=d;
        else
        {
            if(d>total)
                c++;
            else
                total-=d;
        }
    }
    cout<<total<<" "<<c;
    return 0;
}
