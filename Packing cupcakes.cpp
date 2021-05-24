#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,flag=0,i,a,max=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a=n%i;
		if(max<a)
		{
		  max=a;
		  flag=1;
	}
		
	}
	if(flag==1)
	  cout<<i<<endl;
	
}
}
