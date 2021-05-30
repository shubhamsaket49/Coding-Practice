#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,m;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	cin>>m;
	int *brr= new int[m];
	for(int i=0;i<m;i++)
	    cin>>brr[i];
	int sum=0;
	int sum1=0;
	int i=0;
	int j=0;
	int ans=0;
	while(i<n && j<m)
	{
		if(arr[i]<brr[j])
		   sum+=arr[i];
		else if(brr[j]<arr[i])
		    sum1=sum1+brr[i];
		else
		{
			ans=ans+max(sum,sum1)+arr[i];
			sum=0;
			sum1=0;
			i++;
			j++;
		}
	}
	while(i<n)
	{
	    sum+=arr[i++];
	}
	while(j<m)
	{
	    sum1+=brr[j++];
}
  ans=ans+max(sum,sum1);
 cout<<ans<<endl;    
}
}
