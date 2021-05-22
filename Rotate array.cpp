5// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0#

// time O(n) space (O(n))
/*#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	 int *arr= new int[n];
	 for(int i=0;i<n;i++)
	      cin>>arr[i];
	 int temp[k];
	 for(int i=0;i<k;i++)
	{
		
		temp[i]=arr[i];
	}
	for(int i=0;i<n-k;i++)  
	{
		arr[i]=arr[i+k];  
	}
	for(int i=0;i<k;i++)
	{
		arr[i+n-k]=temp[i];  
	}
	   
	for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
	cout<<endl;
}
}*/

// time (O(n*k)  space O(1)
#include <bits/stdc++.h>
using namespace std;
 void RotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}

void RotatebyK(int arr[], int k, int n)
{
	k=k%n;
    for (int i = 0; i < k; i++)
        RotatebyOne(arr, n);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	 int *arr= new int[n+k];
	 for(int i=0;i<n;i++)
	      cin>>arr[i];
   
  RotatebyK(arr,k,n);
   for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
	cout<<endl;
	 
	 
	  }
}
