#include<iostream>
using namespace std;
int main()
{
	int min_num(int,int);
	int minSteps(int,int*);
	int n,steps;
	cin>>n;
	int* dp = new int[n];
	for(int i=0;i<n;i++)
		dp[i]=-1;
	steps=minSteps(n,dp);
	cout<<"\n"<<steps;
}
int min_num(int n1,int n2)
{
	if(n1<n2)
	return n1;
	else
	return n2;
}
int minSteps(int n, int* dp)
{
	int a1,a2=INT_MAX,a3=INT_MAX,a;
	if(n==1)
	{
		dp[0]=0;
		return 0;
	}
	if(dp[n-1]==-1)
	{
		a1=minSteps(n-1,dp);
		dp[n-1]=a1;
	}
	else
		a1=dp[n-1];
	if((n%2)==0)
	{
		if(dp[(n/2)]==-1)
		{
			a2=minSteps(n/2,dp);
			dp[(n/2)]=a2;
		}
		else
			a2=dp[(n/2)];	
	}
	if((n%3)==0)
	{
		if(dp[(n/3)]==-1)
		{
			a3=minSteps(n/3,dp);
			dp[(n/3)]=a3;
		}
		else
			a3=dp[(n/3)];	
	}
	a=min(a1,min(a2,a3))+1;
	return a;
	
}
