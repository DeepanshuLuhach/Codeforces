#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main()
{

    string d;
    int i;
    cin>>d;
    int k=-1;
    for(i=0;i<d.length();i++)
    {
        if(d[i]=='.')
            k=i;
    }
    i=0;
    if(k==-1)
        k=d.length();
    int l=k%3;
    if(l==0&&k>3)
        l=3;
    else if(l==1&&k>4&&d[0]=='-')
        l=4;
    if(d[0]=='-')
        {cout<<"(";i++;}

    cout<<"$";
    if((k>3&&d[0]!='-')||(k>4&&d[0]=='-'))
        while(i<k)
        {
            if(i==l)
            {
                l+=3;
                //cout<<" "<<i<<" ";
                cout<<",";
            }
            cout<<d[i]-48;
            i++;
        }
        else
        {
            while(i<k)
        {
            cout<<d[i]-48;
            i++;
        }
        }
        if(k<d.length())
        {cout<<d[k];
            if(d.length()==k+2)
            {
                cout<<d[k+1]<<"0";
            }
            else
            {
                cout<<d[k+1]<<d[k+2];
            }
        }
        if(k==d.length())
        cout<<".00";
        if(d[0]=='-')
        cout<<")";
}

