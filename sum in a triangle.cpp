/*  https://www.codechef.com/submit/SUMTRIAN*/

#include <iostream>
using namespace std;

int main() {
	int t,max;
	cin>>t;
	while(t--)
	{
	    int n,i,j;
	    cin>>n;
	    int arr[n][n];
	     max=arr[0][0];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<=i;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    for(i=n-2;i>=0;i--)
	    {
	        for(j=0;j<=i;j++)
	        {
	            if(arr[i+1][j] > arr[i+1][j+1])
	            {
	                max=arr[i+1][j];
	            }
	            else
	              {
	                  max=arr[i+1][j+1];
	              }
	               arr[i][j]= max+arr[i][j];
	               
	        }
	       
	    }
	    cout<<arr[0][0]<<endl;  

	}
	
	
	
}

