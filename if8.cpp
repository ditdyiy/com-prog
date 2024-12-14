#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x;
    cin>>x;
    if (x<1e3) {cout<<x;}
    else if (x<1e4) {cout<<round(x/1e3*10)/10.0<<"K";}
    else if (x<1e6) {cout<<round(x/1e3)<<"K";}
    else if (x<1e7) {cout<<round(x/1e6*10)/10.0<<"M";}
    else if (x<1e9) {cout<<round(x/1e6)<<"M";}
    else if (x<1e10) {cout<<round(x/1e9*10)/10.0<<"B";}
    else {cout<<round(x/1e9)<<"B";}
}