#include <iostream>

using namespace std;

int main(){
	int t,j;
	cin >> t;
	while(t--){
		long b;
		cin >> b;
		j=b/2048;
		b=b%2048;
		while(b!=0){
			j+=b%2;
			b/=2;
		}
		cout << j << endl;
	}
} 
