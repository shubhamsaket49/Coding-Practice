#include<bits/stdc++.h>
using namespace std;

int countOccurence(int arr[], int n, int k) {
        map<int,int> s;
        int c=0;
        for(int i=0;i<n;i++)
        {
            s[arr[i]]++;
        }
        for(auto it: s)
        {
            if(it.second> n/k)
               c++;
        }
    
        return c;
    }
int main()
{
	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	cout<<countOccurence(arr,n,k)<<endl;
	
	
}
    
