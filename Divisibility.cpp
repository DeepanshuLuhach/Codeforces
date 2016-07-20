#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int k,a,b,count=0;
	cin>>k>>a>>b;
	if(b>0&&a<0)
	{	
	count=(-1)*(a/k)+(b/k)+1;
	}
	else
	{	int r=a%k;
		a=a+k;		
		count =((b-a)/k)+1;
	}
	cout<<count;
}
