#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin<<t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int sum=n*(1+n)/2;
		long long int sub=0;
		for(int j=0;pow(2,j)<=n;j++)
			sub=sub+pow(2,j);
		sum=sum-2*sub;
		cout<<sum;
	}
	return 0;
}
