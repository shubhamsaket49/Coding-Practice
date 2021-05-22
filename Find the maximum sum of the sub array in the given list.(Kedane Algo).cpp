#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int *arr= new int[n];
	cout<<"Elements in array are:"<<endl;
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	int sum = 0, max = 0;
 
    for (int i = 0; i < n; i++)
    {
        max = max + arr[i];
        if (sum < max)
            sum = max;
 
        if (max < 0)
            max = 0;
    }

	cout<<sum<<endl;
}
