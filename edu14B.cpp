#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int n= strlen(s),f=0;

        for(int i=0;i<n;i++)
        {
            if(i!=n/2&&n%2==1)
            {
                if(s[i]=='H'||s[i]=='A'||s[i]=='I'||s[i]=='i'||s[i]=='l'||s[i]=='p'||s[i]=='M'||s[i]=='O'||s[i]=='o'||s[i]=='T'||s[i]=='u'||s[i]=='U'||s[i]=='V'||s[i]=='v'||s[i]=='W'||s[i]=='w'||s[i]=='X'||s[i]=='x'||s[i]=='Y'||s[i]=='b'||s[i]=='d'||s[i]=='q');
                else
                {
                    f=1;break;
                }
            }
            else
            {
                if(s[i]=='H'||s[i]=='A'||s[i]=='I'||s[i]=='i'||s[i]=='l'||s[i]=='M'||s[i]=='O'||s[i]=='o'||s[i]=='T'||s[i]=='u'||s[i]=='U'||s[i]=='V'||s[i]=='v'||s[i]=='W'||s[i]=='w'||s[i]=='X'||s[i]=='x'||s[i]=='Y');
                else
                {
                    f=1;break;
                }
            }
        }
        if(f==1)
        {
            cout<<"NIE";
        }
        else
        {   int z=0;
            for(int i=0,j=n-1;i<n/2;i++,j--)
            {
                if(s[i]==s[j]||(s[i]=='b'&&s[j]=='d')||(s[j]=='b'&&s[i]=='d')||(s[i]=='p'&&s[j]=='q')||(s[i]=='q'&&s[j]=='p'));
                else{
                    z=1;break;
                }
            }
            if(f==1)
                cout<<"NIE";
            else{
                cout<<"TAK";
            }
        }

}
