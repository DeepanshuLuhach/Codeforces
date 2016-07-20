#include<iostream>
using namespace std;
int main()
{
	int c,h=0,l=0,r;
	cin>>c>>r;
	while(c>0)
	{		
		h=h+c;
		l=l+c%r;
		c=c/r;
		c=c+l/r;
		l=l%r;	
	}
	cout<<h;
}
