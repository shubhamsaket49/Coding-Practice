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
	int i = 0, j = 0;
	while(i <=n && j<=m)
	{
	
        if (arr[i] > brr[j]) {
            j++;
        }
        else if (brr[j] > arr[i]) {
            i++;
        }
        else {
            cout << arr[i] << " ";
            i++;
            j++;
        }
}
	cout<<endl;
	
	
	
	
	
	
}
