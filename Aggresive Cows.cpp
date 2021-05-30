//https://www.spoj.com/problems/AGGRCOW/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		ll *arr= new ll[n];
		for(ll i=0;i<n;i++)
		   cin>>arr[i];
		sort(arr,arr+n); 
		ll l=0;
		ll h=arr[n-1];
		ll mid;
		ll gap=0;
		while(l<=h)
		{
			mid=l+(h-l)/2;
			ll count=1;
			ll left=0;
			for(ll i=1;i<n && count<c;i++)
			{
				if(arr[i]-arr[left] >=mid)
				{
					left=i;
					count++;
				}
			}
			if(count>=c)
			{
				gap=mid;
				l=mid+1;
			}
			else{
			    h=mid-1;
			}
		}
		cout<<gap<<endl;
	}
	
	
	
}
