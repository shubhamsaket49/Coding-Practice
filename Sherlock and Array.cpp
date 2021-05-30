#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t,flag,sum,l;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        sum=0;
        flag=0;
        l=0;
        int *arr= new int[n];
        for(int i=0;i<n;i++)
             cin>>arr[i];
       for (int i = 0; i < n; i++)
             sum=sum+arr[i];
       for(int i=0;i<n;i++)
        {
                sum-=arr[i];
            if(l == sum)
                {
                flag =1;
                }
                l+=arr[i];
 
                 }
            if(flag == 0)
                    cout<< "NO"<<endl;
            else
                    cout<<"YES"<<endl;
    }
    

}
