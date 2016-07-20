#include<iostream>
using namespace std;
long int min(long int a[],long int si)
{
	int m=0;
	for(long int i=1;i<si;i++)
	{
		if(a[i]<a[m]&&a[i]!=0)
			m=i;		
	}
	return m;
}
int main()
{
	long int s,n;
	cin>>s>>n;
	long int x[n],y[n];
	for(long int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	long int mi,h=n;
	int r=1;
	while(h>0)
	{
		mi=min(x,n);
		if(x[mi]>=s)
		{
			r=0;
			break;	
		}
		s=s+y[mi];
		x[mi]=0;
		h--;
	}
	if(r==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
