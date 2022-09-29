// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
        int n; cin >> n; long long c = 0;
            for(int i=0; i<n; i++) {
                long long val; cin >> val; // 24
                while(val % 2 == 0) { 
                    val/=2; 
                    c++;
                }
             cout << c;
                c = 0;
            cout << endl;
        }; 
    return 0; 
}; 