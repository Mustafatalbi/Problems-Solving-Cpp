#include <iostream>
using namespace std;

int prime(int n);
int main() {
    int u; cin >> u; // 10
        for(int i=2; i<=u; i++) { // 2 => 10
            int res = prime(i); // 2 3 4 5 6 7 8 9 10
            if (res != -1) { // if (2=>10) != -1 
                cout << res << " ";
            }
        }
    return 0;
}; 
int prime(int n) {
         int v = n/2;
           for(int i=2; i<=v; i++) {
               if (n % i == 0) { // 100 / (2 to 50)
                    return -1;
               } 
           } // 50 / 2 == 25 || if 50 % (2 => 25) == NOT PRIME
             // 
           return n;
}; 
