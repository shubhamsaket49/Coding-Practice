#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int ns,nt,sum=0,count=0;
	cin>>ns>>nt;
	int stones[ns];
	int Thela_Power[nt];
	for(int i=0;i<ns;i++)
	{
	   cin>>stones[i];	   
}
	for(int i=0;i<ns;i++)
	   sum=sum+stones[i];	   
	for(int i=0;i<nt;i++)
	{
	    cin>>Thela_Power[i];
	}
	sort(stones,stones+ns);
	sort(Thela_Power,Thela_Power+nt);
	for(int i=0;i<nt;i++)
	{
	for(int j=i;j<ns;j++)
	{
	  int a=Thela_Power[i]-stones[j];	
	  if((a>=0) && (Thela_Power[i] >= stones[j]))
	      {
	      	sum=sum-stones[j];
	      	if(sum>0)
	      	   count=count+2;
	      	else
	      	   count=count+1;
		  }	
	}
}
	cout<<count<<endl;
}
