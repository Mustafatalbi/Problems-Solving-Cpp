// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int eye, mouth, body; int res = 0;
        cin >> eye >> mouth >> body;
        if (eye == 0 || body == 0) {
            cout << 0;
        } else { // eye - mouth - body
            if (mouth >= eye && mouth >= body || mouth >= body && mouth < eye || mouth < body && mouth >= eye) {
                res = min(eye,body);
                cout << res << endl;
            } else if (mouth < body && mouth < eye) {
                res = mouth;
                eye-=mouth;
                body-=mouth;
                res+= min(eye/2, body);
                cout << res;
            }
        }
    return 0;
}