#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
long long int arr[100000];
vector<int>vec1;
vector< vector<int> >vec2;
#define MAXX 100000
int main()
{ string s;
cin>>s;
    ll n;
n=s.length();
if(n%2==0)
{

       ll mid=n/2;
    {
        for(int i=mid,j=mid-1;i<n&&j>=0;j--,i++)
        {
            if(s[i]=='p'&&s[j]=='q'||s[j]=='p'&&s[i]=='q'||s[i]=='A'&&s[j]=='A'||s[i]=='b'&&s[j]=='d'||s[i]=='H'&&s[j]=='H'||s[i]=='I'&&s[j]=='I'||s[i]=='M'&&s[j]=='M'||s[i]=='o'&&s[j]=='o'||s[i]=='O'&&s[j]=='O'||s[i]=='T'&&s[j]=='T'||s[i]=='U'&&s[j]=='U'||s[i]=='V'&&s[j]=='V'||s[i]=='v'&&s[j]=='v'||s[i]=='W'&&s[j]=='W'||s[i]=='w'&&s[j]=='w'||s[i]=='X'&&s[j]=='X'||s[i]=='x'&&s[j]=='x'||s[i]=='Y'&&s[j]=='Y'||s[j]=='A'&&s[i]=='A'||s[j]=='b'&&s[i]=='d'||s[j]=='H'&&s[i]=='H'||s[j]=='I'&&s[i]=='I'||s[j]=='M'&&s[i]=='M'||s[j]=='o'&&s[i]=='o'||s[j]=='O'&&s[i]=='O'||s[j]=='T'&&s[i]=='T'||s[j]=='U'&&s[i]=='U'||s[j]=='V'&&s[i]=='V'||s[j]=='v'&&s[i]=='v'||s[j]=='W'&&s[i]=='W'||s[j]=='w'&&s[i]=='w'||s[j]=='X'&&s[i]=='X'||s[j]=='x'&&s[i]=='x'||s[j]=='Y'&&s[i]=='Y');
            else
            {
                cout<<"NIE"<<endl;
                return 0;
                }
        }
        cout<<"TAK"<<endl;
    }
}
else
{
    ll mid=n/2;
    {   if(s[mid]=='A'||s[mid]=='H'||s[mid]=='I'||s[mid]=='M'||s[mid]=='O'||s[mid]=='o'||s[mid]=='U'||s[mid]=='u'||s[mid]=='V'||s[mid]=='v'||s[mid]=='W'||s[mid]=='w'||s[mid]=='X'||s[mid]=='x'||s[mid]=='Y')
        {
            for(int i=mid+1,j=mid-1;i<n&&j>=0;j--,i++)
        {
            if(s[i]=='p'&&s[j]=='q'||s[j]=='p'&&s[i]=='q'||s[i]=='A'&&s[j]=='A'||s[i]=='b'&&s[j]=='d'||s[i]=='H'&&s[j]=='H'||s[i]=='I'&&s[j]=='I'||s[i]=='M'&&s[j]=='M'||s[i]=='o'&&s[j]=='o'||s[i]=='O'&&s[j]=='O'||s[i]=='T'&&s[j]=='T'||s[i]=='U'&&s[j]=='U'||s[i]=='V'&&s[j]=='V'||s[i]=='v'&&s[j]=='v'||s[i]=='W'&&s[j]=='W'||s[i]=='w'&&s[j]=='w'||s[i]=='X'&&s[j]=='X'||s[i]=='x'&&s[j]=='x'||s[i]=='Y'&&s[j]=='Y'||s[j]=='A'&&s[i]=='A'||s[j]=='b'&&s[i]=='d'||s[j]=='H'&&s[i]=='H'||s[j]=='I'&&s[i]=='I'||s[j]=='M'&&s[i]=='M'||s[j]=='o'&&s[i]=='o'||s[j]=='O'&&s[i]=='O'||s[j]=='T'&&s[i]=='T'||s[j]=='U'&&s[i]=='U'||s[j]=='V'&&s[i]=='V'||s[j]=='v'&&s[i]=='v'||s[j]=='W'&&s[i]=='W'||s[j]=='w'&&s[i]=='w'||s[j]=='X'&&s[i]=='X'||s[j]=='x'&&s[i]=='x'||s[j]=='Y'&&s[i]=='Y');
            else
            {cout<<"NIE"<<endl;
                return 0;
                }
        }
        cout<<"TAK"<<endl;}
        else
        {
            cout<<"NIE";
        }
    }

}

    return 0;
}
