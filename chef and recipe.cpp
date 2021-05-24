/* https://www.codechef.com/submit/RECIPE*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int GCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main() {
int t,result;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
  }
    int a= GCD(arr,n);
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/a;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

}

/*

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes her
	int t;
	 cin>>t;
	 while(t--){
	     int n, *arr; cin>>n;
	     arr = new int[n];
	     for(int i=0; i<n; i++) cin>>arr[i];
	     int gcd = arr[0];
	     for(int i=1; i<n; i++) gcd = __gcd(gcd, arr[i]); 
	     for(int i=0; i<n; i++) { arr[i] = arr[i]/gcd; cout<<arr[i]<<" "; }
	     cout<<endl;
	 }
	return 0;
}*/

