#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int win=0,mwin=0;
    for(int i=0;i<d;i++)
    {
        char a[n];int x=0,l=0;
        cin>>a;
       while(a[l]!='\0')
        {
           if(a[l]=='0')
            {
                x=1;break;
            }
            l++;
        }

        if(x==1)
            win++;
        else
            win=0;
        if(win>mwin)
            mwin=win;
    }cout<<mwin;
}
