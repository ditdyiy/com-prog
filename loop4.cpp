#include <iostream>
#include <cmath>
using namespace std;
int main () {
   string a,b;
   getline (cin,a);
   getline (cin,b);
   int n=0;
   if (a.size()!=b.size()) {cout<<"Incomplete answer";return 0;}
   
   else {
    for (int i=0;i<a.size();i++) {
       if (a[i] == b[i]) {n++;}
    
    }
   }
   cout<<n;
}
