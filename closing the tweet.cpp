#include<bits/stdc++.h>
using namespace std;
int main()
{
	
int n,k,x,flag;
string str;
cin>>n>>k;
while(k--)
{
flag=0;
cin>>str;
if(str!="CLOSEALL")
{
	cin>>x;
}
for(int i=0;i<k;i++)
{
	if(str=="CLOSEALL")
	{
		flag=1;
	}
	else
	    flag=0;
}
if(flag==1)
{
	cout<<"0"<<endl;
	
}
else
   cout<<x<<endl;
}
}
	
	
	
	
	
	
	
	
	
	
	
	

