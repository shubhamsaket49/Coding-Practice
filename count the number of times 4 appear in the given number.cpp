// https://www.codechef.com/submit/LUCKFOUR

#include <iostream>
using namespace std;

int main() {
	
	int t,rem,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    rem=0;
	    int n;
	    cin>>n;
	    while(n!=0)
	    {
	        rem=n%10;
	        if(rem==4)
	           count++;
	        n=n/10;
	    }
	    cout<<count<<endl;
	}
	
	
}

