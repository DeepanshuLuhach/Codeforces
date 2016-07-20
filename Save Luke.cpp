#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int d,l,v1,v2;
	long double t=0;
	cin>>d>>l>>v1>>v2;
	t=(long double)(l-d)/(v1+v2);
	std::cout<<std::setprecision(20);
	std::cout<<t;
	return 0;
}
