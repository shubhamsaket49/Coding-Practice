#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,sum,flag=0;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		   	{
		   		sum=sum+arr[j];
		   		if(sum==0)
		   		{
		   		   flag=1;
		   		   break;
		   	}
		       }
		   }
		   if(flag==1)
		       cout<<"Yes"<<endl;
		   else
		       cout<<"No"<<endl;
		   		   
	
}
// EFFICIENT SOLUTION USING SET

/*  
#include<bits/stdc++.h>
using namespace std;
 bool subArrayExists(int arr[], int n)
    {
      unordered_set<int> s; 
    int sum = 0; 
    for (int i = 0 ; i < n ; i++) 
    { 
        sum += arr[i]; 
        if (sum == 0 || s.find(sum) != s.end()) 
            return true; 
  
        s.insert(sum); 
    } 
    return false; 
    }
    int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
} 
*/ 
