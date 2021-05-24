/* https://www.codechef.com/submit/FRUITS*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,m,k;
	    cin>>n>>m>>k;
	    int x=abs(n-m); 
        if(x>k)
        cout<<abs(n-m)-k;
        else
        cout<<"0";
        cout<<endl;
	   
	}
}

