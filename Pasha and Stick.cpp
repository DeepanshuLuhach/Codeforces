#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int m;
	m=m/2;
	if(m%2==0&&m>0)
		m=m/2-1;
	else if (m%2!=0&&m>0)
		m=m/2;
		cout<<m;
		return 0;
}
