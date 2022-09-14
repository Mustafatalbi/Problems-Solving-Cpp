#include <iostream>
using namespace std;

int main() {
    int n, middl, flag = 0; cin >> n; // 50 
        middl = n/2; // 50/2 = 25
        for(int i=2; i<=middl; i++) { // 2=>25
            if (n % i == 0) { // 50 / i 
                cout << "NO";
                flag = 1;
                break;
            }
        }
            if (flag == 0)
            cout << "YES";
    return 0;
}; 