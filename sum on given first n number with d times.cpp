/*https://www.codechef.com/submit/PPSUM*/

#include <bits/stdc++.h>
using namespace std;
int sum(int, int);
int main()
{
    int t1;
    cin>>t1;
    int da,n1;
    while(t1--)
    {
        cin>>da>>n1;
        cout<<sum(da,n1)<<endl;
    }
    return 0;
}
int sum(int da, int n1)
{
    while(da--)
        n1 = n1*(n1+1) / 2;

    return n1;
}

