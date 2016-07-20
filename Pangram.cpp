#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<26)
		cout<<"NO";
	else
	{
		char s[n];
		int a[26]={};
		for(int i=0;i<n;i++)
		{
		   	cin>>s[i];
		   	s[i]=tolower(s[i]);
			if(s[i]<=122&&s[i]>=97)
			{
				a[s[i]-97]++;
			}
		}
		int i;
		for(i=0;i<26;i++)
		{
			if(a[i]==0)
			{
			    cout<<"NO";
			    break;
			}
		}
		if(i==26)
		    cout<<"YES";
		
	}
	return 0;
}
