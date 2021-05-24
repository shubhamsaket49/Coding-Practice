/* https://www.codechef.com/submit/FLOW014*/ 

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    double a,b,c;
	    cin>>a>>b>>c;
	    bool a1= a>50;
	    bool b1= b<0.7;
	    bool c1= c>5600;
	    if(a1 && b1 && c1)
	      cout<<"10"<<endl;
	    else if(a1 && b1)
	      cout<<"9"<<endl;
	    else if(b1 && c1)
	      cout<<"8"<<endl;
	    else if(a1 && c1)
	      cout<<"7"<<endl;
	    else if(a1 || b1 || c1)
	      cout<<"6"<<endl;
	    else
	      cout<<"5"<<endl;
	}
}

