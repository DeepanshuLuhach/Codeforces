/*
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c;
    cin>>a;
    int f=-1;
    if(a%2==1)
        {if((a*a-1)/2>0&&ceil((double)(a*a-1)/2)==floor((double)(a*a-1)/2))
        {
            b=(a*a-1)/2;
            c=b+1;
            cout<<b<<" "<<c;
            return 0;
        }
        else if((a-1)>0&&(2*a-1)>0&&ceil((double)pow((2*a-1),0.5))==floor((double)pow((2*a-1),0.5)))
        {
            b=pow((2*a-1),0.5);
            c=a-1;
            cout<<b<<" "<<c;
            return 0;
        }
        else if(ceil((double)pow((2*a+1),0.5))==floor((double)pow((2*a+1),0.5)))
                {
                    b=pow((2*a+1),0.5);
                    c=a+1;
                    cout<<b<<" "<<c;
                return 0;
                }
        }
        else
        {
            if((a/2)*(a/2)-1>0)
            {
                b=(a/2)*(a/2)-1;
                c=b+2;
                cout<<b<<" "<<c;
            return 0;
            }
            else if(ceil((double)pow((a+1),0.5))==floor((double)pow((a+1),0.5)))
            {
                b=pow((a+1),0.5)*2;
                c=a+2;
                cout<<b<<" "<<c;
            return 0;
            }
            else if(ceil((double)pow((a-3),0.5))==floor((double)pow((a-3),0.5)))
            {
                b=pow((a-3),0.5)*2;
                c=a-2;
            }
        }
            cout<<-1;
    return 0;
}
