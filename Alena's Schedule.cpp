#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s=n,e=-1,a[n]={},pre=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1&&s>i)
			s=i;
		if(a[i]==1)
			e=i;
	}
    if(e==-1)
        cout<<pre;
    else
    {
        int count =0,oc=0;
        for(int i=s+1;i<=e;i++)
        {
            if(a[i-1]==0&&a[i]==0)
        	{
        		count++;
        		oc++;
        	}
    		else if(oc>=1)
    		{
    			count++;
    			oc=0;
    		}
    		else if(a[i]==1)
    			oc=0;
    	}
    	pre=e-s+1-count;
    	cout<<pre;
    }
	return 0;
}
