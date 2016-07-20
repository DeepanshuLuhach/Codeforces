#include<iostream>
using namespace std;
int main()
{
	long long int c;
	cin>>c;
	int p=0;
	while(c>0)
	{   
	    int m=c%10;
	    if(m==4||m==7)
	        p++;
		c=c/10;
	}
	if(p==4||p==7)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
	
}
