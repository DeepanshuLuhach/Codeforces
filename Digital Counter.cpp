#include<iostream>
using namespace std;
int main()
{
	char d[2];
	cin>>d;
	int p=1;
	for(int i=0;i<2;i++)
	{
		switch(d[i]-48)
		{
			case 0:	p=p*2;
				break;
			case 1:	p=p*7;
				break;
			case 2:	p=p*2;
				break;
			case 3:	p=p*3;
				break;
			case 4:	p=p*3;
				break;
			case 5:	p=p*4;
				break;
			case 6:	p=p*2;
				break;
			case 7:	p=p*5;
				break;
			case 8:	p=p*1;
				break;
			case 9:	p=p*2;
				break;		
		}
	}
	cout<<p;
}
