#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int k,a,b,count=0;
	cin>>k>>a>>b;
	if(b>=0&&a<=0)
	{	
	count=(-1)*ceil(a/k)+floor(b/k)+1;
	}
	else
	{	
            int r=a%k;
	    if(r>0)
	    	a=a+k-r;
	    else if(r<0)
	        a=a+r;
            int t=b%k;
	    if(t>0)
	    	b=b-t;
	    else if(t<0)
	        b=b+r;	
            if(b<0)	
                count =(b-a)/k;
            else if(a>0)
                count =(b-a)/k+1;
            else if(a==b)
                count =1;
              
	}
    cout<<count;
    return 0;
}
