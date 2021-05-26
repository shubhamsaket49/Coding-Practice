// Time O(n)  Space O(n)

#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string str) {
	   
	   map<char,int>m;
	   string s="";
	  for(auto it:str)
	{
	    if(m[it]==0)
	    {
	        s.push_back(it);
	        m[it]++;
	    }
	      
	}
	return s;

}

int main()
{
	string str;
	cin>>str;
	cout<<removeDuplicates(str)<<endl;
	
}
