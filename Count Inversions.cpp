//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#//

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
    long long c=0;
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
    {
        if((arr[i] > arr[j]) && (i < j))
            c++;
    }
    }
    
  cout<<c<<endl;
    }
