#include<iostream>
using namespace std;
int main()
{
	int t;
	int count=0,d=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a;
		for(int j=0;j<3;j++)
		{
			cin>>a;
			count=count+a;
		}
		if(count>=2)
			d++;
		count=0;
	}
	cout<<d;
}
