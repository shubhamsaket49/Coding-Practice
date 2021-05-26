// Time O(n^2) Space O(1)

#include<bits/stdc++.h>
using namespace std;
int find3Numbers(int A[], int n, int X)
{
    int temp=0;
   for (int i = 0; i < n; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    int c=0,l,r,i;
    for(i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
    while(l<r)
    {
        if((A[i]+A[l]+A[r]==X))
        {
            c=1;
            break;
        }
        else if((A[i]+A[l]+A[r]<X))
           l++;
        else
            r--;
    }
    if(c==1)
     break;
}
   return c;
}
int main()
{
	int n,X;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++)
	   cin>>A[i];
	cin>>X;
	
	cout<<find3Numbers(A,n,X)<<endl;
}
