#include<iostream>
using namespace std;
int main()
{
	int a[26]={0},count=0;
	char s[101];
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		a[s[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if (a[i]>0)
			count++;
	}
	if(count%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}
