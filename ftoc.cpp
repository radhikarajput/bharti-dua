#include<iostream>
using namespace std;
int main()
{
	int n,i,f=0,a,t;
	cin>>n;
	cin>>a;
	for(i=1;i<=n-1;i++)
	{
		cin>>t;
		
		if(t<a)
		{
			a=t;
			f=1;
			continue;
		}
		else
		{
			//cin>>a;
			for(i;i<n;i++)
			{
				cin>>a;
				if(a>t)
				{
					t=a;
					f=1;
					continue;
				}
				else
				{
					f=0;
					break;
				}
			}
			
		}
		if(f==1)
		{
		
			cout<<"true";
			//break;
		}
	
		else
		{
		
			cout<<"false";
		//	break;
		}
		
	}
	
}
