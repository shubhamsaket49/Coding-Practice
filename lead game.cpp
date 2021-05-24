#include <bits/stdc++.h>
using namespace std;

int main() {
int t,w,l,max=0,flag=0;
cin>>t;
while(t--)
{

    cin>>w>>l;
    int a= abs(w-l);
    if(max<a && w>l)
    {
      max=a;
      flag=1;
    }  
    else if(max<a && w<l)
    {
        max=a;
        flag=0;
    }
      
}
    if(flag==1)
       cout<<"1"<<" "<<max<<endl;
    else
      cout<<"2"<<" "<<max<<endl;
      


}
