#include <iostream>
#include <cmath>
using namespace std;
int main () {
   string a;
   getline (cin,a);
   for (int i=0;i<a.size();i++) {
      if (a[i]=='(') {
         a[i]='[';
      }
      else if (a[i]=='[') {
         a[i]='(';
      }
      else if (a[i]==')') {
         a[i]=']';
      }
      else if (a[i]==']') {
         a[i]=')';
      }
   }
   cout<<a;
}
