// https://www.spoj.com/problems/EKO/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	
	ll n,m;
	cin>>n>>m;
	ll *arr= new ll[n];
	for(ll i=0;i<n;i++)
	   cin>>arr[i];
	sort(arr,arr+n);
	ll l=0;
	ll h=arr[n-1];
	ll mid;
	ll ans=0;
	while(l<h)
	{
		mid=(h+l)/2;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			if(mid<arr[i])
				sum=sum+(arr[i]-mid);
			}
			if(sum>=m)
			{
			  ans=max(ans,mid);
			  l=mid+1;
		}
			else
			   h=mid;
		}
		cout<<ans<<endl;
	}
	
	
	
	
	
	
	
	
	

