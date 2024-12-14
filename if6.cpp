#include <iostream>
#include <string>
using namespace std;
int main () {
    int a;
    cin>>a;
    if (a>0) {cout<<"positive"<<endl;}
    else if (a==0) {cout<<"zero"<<endl;}
    else if (a<0) {cout<<"negative"<<endl;}
    if (a%2==0) {cout<<"even";}
    else {cout<<"odd";}
}