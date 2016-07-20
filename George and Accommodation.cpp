#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0,a[2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[j];
		}
		if(a[0]<=a[1]-2)
			count++;
	}
	cout<<count;
	return 0;
}
