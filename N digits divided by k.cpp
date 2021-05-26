//Given two integers N and K where N denotes the number of digits in a number. You have to find a number of  N digits which is exactly divisible by K in logarithmic time complexity.
//For e.g., For inputs N=2 and K=3, you have to find a 2 digit number which is exactly divisible by 3. Here, the answer can be 12, 15, 33, 96 etc.....The answers can be multiple so you can print any one. 
//[NOTE : You might be asked the logic for the above question]
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a=pow(10,n)-1;
	if(a%k==0)
	  cout<<a<<endl;
	else
	  cout<<a-(a%k)<<endl;
}
