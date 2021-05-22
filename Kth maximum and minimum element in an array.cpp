#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Kth minimum element in the array is"<<" "<< arr[k-1]<<endl;
    cout<<"Kth maximum element in the array is"<<" "<< arr[n-k]<<endl;
	
	
	
}

