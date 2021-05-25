//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cin>>S;
	int a=S.length();
    int flag=0;
    for(int i=0;i<a;i++)
    {
             if(S[i]!=S[a-i-1])
             {
                 flag=1;
                 break;
             }
        
    }
    if(flag==1)
       cout<<"0"<<endl;
    else
      cout<<"1"<<endl;
	}

