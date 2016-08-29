/**
** Submission by DragonFist @Deepanshu Luhach
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long int> vl;
#define PI 3.14159265359


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	char m[2];
	cin>>m;
	if(m[0]>'a'&&m[0]<'h'&&m[1]>'1'&&m[1]<'8')
		cout<<8;
	else if((m[0]=='a'||m[0]=='h')&&(m[1]=='1'||m[1]=='8'))
		cout<<3;
	else
		cout<<5;
	return 0;
}
