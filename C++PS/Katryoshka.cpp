// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int eye, mouth, body; int res = 0;
        cin >> eye >> mouth >> body;  // 12 5 11 
        if (eye == 0 || body == 0) {
            cout << 0;
        } else { // eye - mouth - body
            if (mouth >= eye && mouth >= body || mouth >= body && mouth < eye || mouth < body && mouth >= eye) {
                res = min(eye,body);
                cout << res << endl;
            } else if (mouth < body && mouth < eye) {
                res = mouth; // 5 
                eye-=mouth; // 12 - 5 = 7 / 2 = 3.5 (int = 3);
                body-=mouth; // 11  - 5 = 6 
                res+= min(eye/2, body); // 5 + 3.5 = 8.5 
                cout << res;
            }
        }
    return 0;
}
