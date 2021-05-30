#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m;
	cin>>k;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
	     cin>>arr[i][j];
	 }
	
	}
	 if (n == 0 || m==0)
        cout<<"-1"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
        if(arr[i][j] == k)
        {
            cout<<i <<" "<< j <<endl;
            return 1;
        }
    }
}
  
    cout << " Element not found"<<endl;
    
}
	
