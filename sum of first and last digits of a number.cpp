// https://www.codechef.com/submit/FLOW004

#include <iostream>
using namespace std;
int first(int n)
{
    while(n>=10)
    {
        n=n/10;
    }
return n;
}

int last(int n)
{
return (n%10);
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a= first(n)+ last(n);
	    cout<<a<<endl;
	}
}

