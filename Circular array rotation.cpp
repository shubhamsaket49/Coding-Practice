// https://www.hackerrank.com/challenges/circular-array-rotation/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q;
    cin>>n>>k>>q;
     int *arr= new int[n];
     int *query= new int[q];
     for(int i=0;i<n;i++)
          cin>>arr[i];
      for(int i=0;i<q;i++)
          cin>>query[i];
     int temp[n];
     int x=-1;
     k=k%n;
     for(int i=n-k;i<=n-1;i++)
    {
        
        temp[++x]=arr[i];
    }
    for(int i=0;i<n-k;i++)
    {
        temp[++x]=arr[i];
    }
    
    for(int i=0;i<q;i++)
       cout<<temp[query[i]]<<endl;
   
}


