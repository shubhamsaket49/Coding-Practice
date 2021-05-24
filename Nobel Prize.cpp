// https://www.codechef.com/START2C/submit/NOBEL
#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n)
{
    
}

int main()
{
 
 int t,res;
 cin>>t;
 while(t--)
 {
     int n,m;
     cin>>n>>m;
     int *arr= new int[n];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     sort(arr, arr + n);
    int res = 0;
    for (int i = 0; i < n; i++) {
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
 
        res++;
    }
     if(res==n)
       cout<<"No"<<endl;
    else
       cout<<"Yes"<<endl;
     }
     
 }


