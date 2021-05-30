#include<bits/stdc++.h>
using namespace std;
int trailing(int n) {
            int count = 0;
            for (int i = 5; n / i >= 1; i *= 5)
                    count += n / i;
            return count;
        }
        int findNum(int n){
            int l=1,h = n*5,ans =-1;
            while(l<=h){
                int mid = l+(h-l)/2;
                int c = trailing(mid);
                if(c == n){
                        ans = mid;
                        h = mid-1;
            }
            else if(c<n) 
                l=mid+1;
            else
                h=mid-1; 
                
            }
        }
   int main()
   {
   	int n;
   	cin>>n;
   	cout<<findNum(n)<<endl;
		  }       
