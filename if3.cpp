#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a,b,c,d,max,min,e;
    cin>>a>>b>>c>>d;
    max=min=a;
    if (b>max) {max=b;}
    if (c>max) {max=c;}
    if (d>max) {max=d;}
    if (b<min) {min=b;}
    if (c<min) {min=c;}
    if (d<min) {min=d;}
    e=(a+c+b+d-max-min)/2;
    cout<<round(e*100.0)/100.0;
}