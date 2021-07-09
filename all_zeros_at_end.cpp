#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(12);
	int l=0,r=1;
	for(int i=0;i<=v.size()-1;i++)
	{
	 	if(v[l]==0)
	 	{
	 		if(v[r]!=0)
	 		{
	 			swap(v[l],v[r]);
	 			l=l+1;
	 			r=r+1;
			}
			else
			{
				r=r+1;
			}
		}
		else
		{
			l=l+1;
			r=r+1;
		}
	}
	for(int i=0;i<=v.size()-1;i++)
	{
		cout<<v[i]<<" ";
	}
};
