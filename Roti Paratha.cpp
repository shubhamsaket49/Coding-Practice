#include<bits/stdc++.h>
using namespace std;
int roti(int arr[],int n,int p,int mid)
	{	
		int time=0;
		int paratha=0;
		for(int i=0;i<n;i++)
		{
		time=arr[i];
		int a=2;
		while(time<=mid)
	{
		paratha++;
		time=time+(arr[i]*a);
		a++;
	}
		if(paratha>=p)
		return 1;
}
	return 0;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p;
		cin>>p;
		int n;
		cin>>n;
		int *arr= new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		int l=0;
		int h=10e8;
		int mid;
		int ans=0;
		while(l<=h)
			{
				mid=(l+h)/2;
				if(roti(arr,n,p,mid))
				{
					ans=mid;
					h=mid-1;
				}
				else
				   l=mid+1;
				
			}
			cout<<ans<<endl;
		}
		
		
	}
	

