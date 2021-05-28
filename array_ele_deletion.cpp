#include<iostream>
using namespace std;
int main()
{
int n,x,ind=0,flag=0;
cout<<"enter size of array you want                    :";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cout<<"enter the element of array :";
	cin>>arr[i];
}
cout<<"enter the element you want to delete from array :";
cin>>x;
for (int i=0;i<n;i++)
{
	if(x==arr[i])
	{
		flag+=1;
		ind=i;
		break;
	}
}
for(int i=ind;i<n-1;i++)
{
	arr[i]=arr[i+1];
}
n=n-1;
cout<<"Element's in array after deleting the element :"<<x<<endl<<"They Are :";
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}
