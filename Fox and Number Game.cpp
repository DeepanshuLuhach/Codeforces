#include<iostream>
using namespace std;
int maxi(int a[],int s)
{	int m=1;
	for(int i=0;i<s;i++)
	{
		if(m<a[i])
			m=i;
	}
	return m;
}
int mini(int a[],int s)
{
	int m=100;
	for(int i=0;i<s;i++)
	{
		if(m>a[i])
			m=i;
	}
	return m;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min=mini(a,n),max=maxi(a,n);
	while(a[max]!=a[min])
	{
		a[max]=a[max]-a[min];
		max=maxi(a,n);
		min=mini(a,n);
	}
	cout<<a[0]*n;
	return 0;
}
