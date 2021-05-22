#include<bits/stdc++.h>
using namespace std;
map<int,int> freq(int arr[], int n){
map<int,int> f;
    for (int i = 0; i < n; i++)
    f[arr[i]]++;
    return f;
}
int main()
{
	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
    map<int,int> f = freq(arr, n);
    map<int,int> :: iterator it;
    for(it = f.begin(); it != f.end(); ++it){
        if (it->second > 1)
            cout<<it->first<<" --> "<<it->second<<endl;
}
}
