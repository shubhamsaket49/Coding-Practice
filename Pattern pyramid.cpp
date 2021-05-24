#include <iostream>
using namespace std;

void up(int n)
{
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void down(int n)
{
    for (int i = n/2-1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int j, n;

    cout <<"Enter number of rows: ";
    cin >> n;
    up(n);
    down(n);
}
