#include<iostream>
using namespace std;
int main()
{
	long int x;
	cin>>x;
	int count=0;
	while(x>0)
	{	int d;
		if(x/5>0)
		{
			d=x/5;
			count=count+d;
			x=x-d*5;	
		}
		else if(x/4>0)
		{
			d=x/4;
			count=count+d;
			x=x-d*4;	
		}
		else if(x/3>0)
		{
			d=x/3;
			count=count+d;
			x=x-d*3;	
		}
		else if(x/2>0)
		{
			d=x/2;
			count=count+d;
			x=x-d*2;	
		}
		else
		{
			count=count+x;
			x=0;	
		}
	}
	cout<<count;
	return 0;
	
}
