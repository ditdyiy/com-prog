#include <iostream>
using namespace std;
int main () {
    long n;
    cin >> n;
    int i = 2;
    while (n != 1) {
        while (n%i == 0) {
            cout << i;
            n  = n/i;
            if (n != 1) cout << "*";
        }
        i++;
    }
    return 0;
}