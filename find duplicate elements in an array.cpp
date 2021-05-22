// https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	for(int i=0;i<arr.size();i++)
	{
		for(int j=i+1;j<arr.size();j++)
		{
			if(arr[i]==arr[j])
			    cout<<arr[i]<<" "<<endl;
		}
	}
}
	
