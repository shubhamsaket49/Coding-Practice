#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,rem=0,a=0,flag=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	while(n != 0)
	{
	 rem=n/5;
	 if(rem >= 1) 
	 {
	  a=a+rem;
	  flag=1;
}
	 n=rem; 	
	}
if(flag==1)
 cout<<a<<endl;	
	
	
}
