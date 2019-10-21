#include<iostream>
using namespace std;
int main()
{
	unsigned int N1,e=0,o=0,f=0,n;
	cin>>n;
	for(n;n>0;n--)
	{
	f=0;e=0;o=0;
	cin>>N1;
	for(N1;N1>0;N1/=10)
	{
		if(N1%2==0)
		e=e+(N1%10);
		else
		o=o+(N1%10);
	}
	if(e%4==0)
		f=1;
	if((f==0)&&(o%3==0))
		f=1;
	if(f==1)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	}
}
