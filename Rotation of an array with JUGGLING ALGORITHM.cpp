#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
if (b == 0)
        return a;
 
    else
        return GCD(b, a % b);
}
 
void Rotate(int arr[], int d, int n)
{
    d = d % n;    // To deal overflow condition
    int gcd = GCD(d, n);
    for (int i = 0; i < gcd; i++)   //   To divide elements of given array in some sets equals to gcd(a,b)
		{
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
int main()
{
	int n,a,d;
	cin>>n>>d;
int *arr= new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	Rotate(arr,d,n);
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	
	
}
