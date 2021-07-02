//*********************BRUTE FORCE********************************
#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==1)
	{
		cout<<1;
	}
	for(int i=1;i<n-1;i++)
	{
		int sum1=0,sum2=0;
		for(int j=0;j<i;j++)
		{
			sum1+=arr[j];
		}
		for(int k=i+1;k<n;k++)
		{
			sum2+=arr[k];
	    }
		if(sum1==sum2)
		{
			flag+=1;
			cout<<i+1<<"\n";
	    	break;
		}
	}
	if(flag==0)
	{
		cout<<"no equilibriam number";
	}
}
