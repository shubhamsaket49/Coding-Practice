// https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/
// Linear Search(O(N))
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,value,c=0,i,si=0;
	cin>>n>>value;
	int *arr= new int[n];
	cout<<"Enter elements in sorted ascending order"<<endl;
	for(i=0;i<n;i++)
	    cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(c==0)
			{
				si=i;
			}
			c++;
			
		
		}
		     
	}
	cout<<"First index at"<<" "<<si<<" "<<"Last Index at"<<" "<<si+c-1<<endl;	

}*/

/*
//Binary Search O(logN)
#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int value, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > value)
            high = mid - 1;
        else if (arr[mid] < value)
            low = mid + 1;
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}

int last(int arr[], int value, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > value)
            high = mid - 1;
        else if (arr[mid] < value)
            low = mid + 1;
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int main()
{
int n,value,c=0,i;
	cin>>n>>value;
	int *arr= new int[n];
	cout<<"Enter elements in sorted ascending order"<<endl;
	for(i=0;i<n;i++)
	    cin>>arr[i];
	cout<<"Starting index of given value at"<<" "<<first(arr,value,n)<<endl;
	cout<<"Last index of given value at"<<" "<<last(arr,value,n)<<endl;
	        
	}
	
	
*/	
// using Vector	
	
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,value,c=0,i,a,si=0;
	cin>>n>>value;
	vector<int>arr;
	cout<<"Enter elements in sorted ascending order"<<endl;
	for(i=0;i<n;i++)
	{
	    cin>>a;
	    arr.push_back(a);
	}
	for(i=0;i<arr.size();i++)
	{
		if(value ==arr[i])
		{
			if(c==0)
			{
				si=i;
			}
			c++;	
		}
		     
	}
	cout<<"First index at"<<" "<<si<<" "<<"Last Index at"<<" "<<si+c-1<<endl;	
	
}
