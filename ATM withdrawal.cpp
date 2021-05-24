#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout <<fixed<<setprecision(2);
    int a;
    float b;
    cin>>a>>b;
    float result;
    if(a % 5 == 0 && b >= a + 0.5f){
        result = b - a - 0.5f;
        cout<<result<<endl;
    }else{
        cout<<b<<endl; 
    }
    return 0;
}
