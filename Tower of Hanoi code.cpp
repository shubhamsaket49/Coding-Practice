#include<iostream>
using namespace std;
void towers(int n, char src, char aux, char dist)
{
	if(n==1)
	{
	 cout<<"Move the disc"<<n<<" from "<<src<<"to"<<dist;
}
	 towers(n-1,src,dist,aux);
	 cout<<"Move the disc "<<n<<" from peg "<<src<<" to "<<dist<<endl;
	 towers(n-1,aux,src,dist);
}
int main()
{
	int n;
	char a,b,c;
	cout<<"Enter the number of disks "<<endl;
	cin>>n;
	
	towers(n,'a','b','c');
}
