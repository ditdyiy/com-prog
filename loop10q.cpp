#include <iostream>
#include <string>
using namespace std;
int main () {
    string x;
    int c=1;
    cin>>x;
    for (int i=0;i<x.size();i++) {
        if (x[i]!=x[i+1]) {
            cout<<x[i]<<" "<<c<<" ";
            c=1;
        }
        else {
        c++;
        }
    }
}