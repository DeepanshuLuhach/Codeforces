#include<iostream>
using namespace std;
int main()
{
	long long int a,b,count=0;
	cin>>a>>b;
	while(a>=1&&b>=1)
	{	long int t;
		if(a%b==0)
			count=count + a/b;
		else if(b%a==0)
			count=count+ b/a;
		if(a>=b)
		{	
			t=a/b;
			a=a-t*b;
			count+=t;
		}
		else if(b>a)
		{	
			t=b/a;
			b=b-t*a;
			count+=t;
		}
	}
	cout<<count;
}
