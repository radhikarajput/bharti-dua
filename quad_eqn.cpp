#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float x1,x2;
	cin>>a>>b>>c;
	d=b*b-(4*a*c);
	if(d<0)
	{
		cout<<"Imaginary\n";
		return 0;
	}
	else
	{
		if(d==0)
		{
			cout<<"Real and Equal\n";
			x1= -1*b/(2*a);
			cout<<x1;
		}
		else
		{
			cout<<"Real and Distinct\n";
			x1= ((-1*b)+sqrt(d))/(2*a);
			x2= ((-1*b)-sqrt(d))/(2*a);
			cout<<x1<<"\t"<<x2;
		}
	}
}
