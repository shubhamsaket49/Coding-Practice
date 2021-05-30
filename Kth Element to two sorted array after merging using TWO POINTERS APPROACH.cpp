https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1#

#include<bits/stdc++.h>
using namespace std;
int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
       int i=0,j=0,temp=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                temp++;
                if(temp==k)
                {
                   return arr1[i];
                }
                i++;
            }  
                else
                {
                    temp++;
                    if(temp==k)
                    {
                    return arr2[j];
                    }
                    j++;
                }
            }
            while(i<n)
            {
                temp++;
                if(temp==k)
                {
                   return arr1[i];
                }
                i++;  
            }
            while(j<m)
            {
               temp++;
                    if(temp==k)
                    {
                    return arr2[j];
                    }
                    j++; 
            }
        }
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int *arr1= new int[n];
	int *arr2= new int[m];
	for(int i=0;i<n;i++)
	  cin>>arr1[i];
	for(int i=0;i<m;i++)
	  cin>>arr2[i];
	cout<<kthElement(arr1, arr2,n,m,k)  <<endl;
}
