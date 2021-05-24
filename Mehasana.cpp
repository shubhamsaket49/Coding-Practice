/*  https://www.codechef.com/problems/AMR15A*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counte,counto;
		counte=0;
		counto=0;
		int n;
		cin>>n;
		int *arr=new int[n];
		for(int i=1;i<=n;i++)
		    cin>>arr[i];
		for(int i=1;i<=n;i++)
		{
			if(arr[i]%2==0)
			  counte++;
			else
			counto++;
		}
		if(counte>counto)
		  cout<<"READY FOR BATTLE"<<endl;
		else
		  cout<<"NOT READY"<<endl;
	
	
	
}
