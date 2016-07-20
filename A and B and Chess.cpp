#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	for(int i=0;i<8;i++)
	{
		char c[8];
		for(int j=0;j<8;j++)
		{
			cin>>c[j];
			if(c[j]>=65&&c[j]<=90)
			{
				if(c[j]=='Q')
					a=a+9;
				if(c[j]=='R')
					a=a+5;
				if(c[j]=='B')
					a=a+3;
				if(c[j]=='N')
					a=a+3;
				if(c[j]=='P')
					a=a+1;
					
			}
			else if(c[j]>=97&&c[j]<=122)
			{
				if(c[j]=='q')
					b=b+9;	
				if(c[j]=='r')
					b=b+5;
				if(c[j]=='b')
					b=b+3;
				if(c[j]=='n')
					b=b+3;
				if(c[j]=='p')
					b=b+1;
					
			}
			
		}
	}
	//cout<<a<<"\n"<<b<<endl;
	if(a>b)
		cout<<"White";
	else if(b>a)
		cout<<"Black";
	else 
		cout<<"Draw";
	return 0;
}
