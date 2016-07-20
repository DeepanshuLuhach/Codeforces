#include<iostream>
using namespace std;
int main()
{
	char f[101];
	cin>>f;
	int count0=0,count1=0;flag=0;
	for(int i=0;f[i]!='\0';i++)
	{	
		if(f[i]=='1')
		{
			count1++;
			count0=0;
		}
		else if(f[i]=='0')
		{
			count0++;
			count1=0;
		}
		if(count0==7||count1==7)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
