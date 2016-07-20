#include<iostream>
using namespace std;
int main()
{
	char c [9][9];
	for(int i=1;i<9;i++)
	{
		for (int j=1;j<9;j++)
		{
			cin>>c[i][j];
		}
	}
	
	int minA=8,minB=8;
	for(int i=1;i<9;i++)
	{	
		int Bp=0,Ap=0,ta=8,tb=8;	
		for (int j=1,k=7,cb=0;j<9;j++)
		{
			if(c[j][i]=='W')
			{
				ta=j-1;Ap=1;
			}
			else if(c[k][i]=='W')
			{
				cb=1;
			}			
			else if(c[j][i]=='B')
			{
				tb=8-j;Bp=1;
			}
			if((Ap==1&&Bp==0)&&minA>ta)
				minA=ta;
			if((cb==0&&Bp==1)&&minB>tb)
				minB=tb;
			
		}
		
	
	}

	if(minA<=minB)
		cout<<"A";
	else
		cout<<"B";
	return 0;
}
