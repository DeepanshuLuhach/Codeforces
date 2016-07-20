#include<iostream>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	m*=2;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<m;j+=2)
		{
			cin>>a[i][j-1]>>a[i][j];
			if(a[i][j]==1||a[i][j-1]==1)
			count++;
		}
	}
	cout<<count;
}
