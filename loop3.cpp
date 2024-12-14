#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main () {
   string a,b;
   int c=0;
   getline (cin,a);
   getline (cin,b);
   for (int i = 0; i<b.size();i++) {
      if(b.substr(i,a.size()) == a)
      {
         if(b[i+a.size()]<65  && b[i-1]<65)
         {
            c++;
         }
      }
   
   }
   cout << c;
}
