#include<iostream>
using namespace std;
int main()
{
	int a[5]={0},h[101]={0};
	int i=4,sum=0;
	while(i>=0)
	{
		cin>>a[i];
		sum+=a[i];
		h[a[i]]++;
		i--;
	}
	int sub=0;
	i=100;
	while(i)
	{
		if(h[i]==2)
		{
			sub=2*i;
		//	cout<<i<<endl;
			break;
		}
		else if(h[i]>2)
		{
			sub=i*3;
		//	cout<<i<<endl;
			break;
		}
		i--;
	}
//	cout<<sum<<"\n"<<sub<<endl;
	cout<<sum-sub;
}
