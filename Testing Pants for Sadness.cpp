#include<iostream>
using namespace std;
int main()
{
	int n;
	long long int sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		sum=sum+a+(a-1)*i;
	}
	cout<<sum;
	return 0;
}
