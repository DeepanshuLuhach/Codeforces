#include<iostream>
using namespace std;
int main()
{
	int sum=0,e=0,o=0,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]%2==0)
			e++;
		else
			o++;
	}
	if(sum%2==0)
		cout<<e;
	else
		cout<<o;
	return 0;
}
