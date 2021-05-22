#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,k,sum,a=0,b=0;
	cin>>n>>k;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		   	{
		   		sum=sum+arr[j];
		   		if(sum==k)
		   		{
		   		   b=j-i+1;
		   		   if(b>a)
		   		      a=b;
		   		  }
		   		   
			   }
	}
	cout<<a<<endl;
	
	
}
