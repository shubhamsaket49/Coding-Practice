#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int count1s(int N)
{
    int count1 = 0;
    while (N > 0) {
        if (N & 1) {
            count1++;
        }
        N = N >> 1;
    }
    return count1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ \
    int n, k, count = 0, max_count = -1, res=0;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> result(n-k+1);
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<=n-k; i++){
        max_count = -1;
        for(int j=i; j<i+k; j++){
            count = count1s(arr[j]);
            if(count > max_count) { max_count = count; res = arr[j];}
            if(count == max_count) res = arr[j];
        }
        result[i] = res;
    }
    for(int i=0; i<n-k+1; i++) cout<<result[i]<<" ";
    return 0;
}
