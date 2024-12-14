#include <iostream>
#include <cmath>
using namespace std;
int main () {
   double l,u,a,x;
   cin>>a;
   l=0;
   u=a;
   x=(l+u)/2;
   while ((abs(a - pow(10,x))) > 1e-10*max(a,pow(10,x))) {
    if (pow(10,x) > a) {
        u=x;
    }
    else {
        l=x;
    }
    x=(l+u)/2;
   }
   cout<<x;
   return 0;
}
