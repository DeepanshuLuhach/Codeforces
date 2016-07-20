#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    char s[101],h[]="hello";
    scanf("%s",s);
   int i=0;
    for(int j=0;j<strlen(s);j++)
    {
        if(s[j]==h[i])
        {
            i++;
        }
        if(i==5)
        {
            cout<<"YES";
            break;
        }
    }
    if(i<5)
        cout<<"NO";
}
