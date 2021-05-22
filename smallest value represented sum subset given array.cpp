#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()


{

	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	int c=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=c)
		    c=c+arr[i];
		 
	}
	cout<<c<<endl;

}
