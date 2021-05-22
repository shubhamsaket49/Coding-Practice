// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a= new int[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
    int co=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
        {
            if(a[i]==0)
               co++;
            if(a[i]==1)
              c1++;
            if(a[i]==2)
               c2++;
        }
    for(int i=0;i<co;i++)
           a[i]={0};
    for(int i=co;i<c1+co;i++)
           a[i]={1};
    for(int i=c1+co;i<c2+c1+co;i++)
           a[i]={2};
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
  cout<<endl;
	
	
}
