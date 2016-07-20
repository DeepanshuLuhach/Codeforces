#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,ua=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    string s;
	    cin>>s;
	    int last=s.length()-1;
	    if(s[last]<=57&&s[last]>=48)
	    {   int m=1,age=0;
	        while(last>=0)
	        {
	          age=age+(s[last]-48)*m;
	          m*=10;
	          last--;
	        }
	        if(age<18)
	            ua++;
	    }
	    else if(s=="ABSINTH"||s=="BEER"||s=="BRANDY"||s=="CHAMPAGNE"||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE")
	            ua++;
	}
	    cout<<ua;
	    return 0;
	}
