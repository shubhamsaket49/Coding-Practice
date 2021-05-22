#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	int m;
	cin>>n>>m;
	int *arr= new int[n];
	int *brr= new int[m];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	for(int i=0;i<m;i++)
	   cin>>brr[i];
	set<int> uni;
    for (int i = 0; i < n; i++)
        uni.insert(arr[i]);
    for (int i = 0; i < m; i++)
        uni.insert(brr[i]);
    set<int>:: iterator it;
    cout <<"Union of two arrays"<<endl;
    for (it = uni.begin(); it!= uni.end(); it++)
            cout << *it << " ";
	cout<<endl;
	
	
	
	
	
	
	
	
	
}
