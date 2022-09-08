#include <iostream>
using namespace std;

int main() {
    int a,b,c,d; cin >> a >> b >> c >> d;
    
   int n1 = a%100; // 1 % 100 = 01
   int n2 = b%100; // 2 % 100 = 02
   int n3 = c%100; // 1 % 100 = 01
   int n4 = d%100; // 2 % 100 = 02
   
   int all = (n1*n2*n3*n4) % 100; // (1 * 2 * 1 * 1) = 4 % 100 = 4;
//   cout << all; // 4
        if (all <= 9) {
            cout << "0" <<all;
        } else {
            cout << all; // 4
        }
    
    return 0;
}; 
