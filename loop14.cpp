#include <iostream>
using namespace std;
int main() {
    float p;
    cin>>p;
    float k=1, t=1;
    while (true) {
        t=t*((365-(k-1)))/365;\
        if (1-t>=p) {
            cout<<k;
            break;
        }
        else {
            k++;
        }
    }
    }
    
    
// if (false) {
    //     for (t=t*((365-(k-1)))/365;1-t>=p;k++) {
    //         cout<<k;
    //         break;
    //     }
        
    // }
    // else cout<<k;