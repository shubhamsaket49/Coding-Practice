//  https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	int max= arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		     max=arr[i];   
	}
	cout<<max<<endl;
}
