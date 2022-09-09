#include <iostream>
using namespace std;

int main() {
        int a,b ,k;
        cout << "Insert The Main Value k \n"; 
        cin >> k;
        cout << "Insert Ur Name Memo \n"; cin >> a;
        cout << "Insert Ur Name Momo \n"; cin >> b;
        
        if (a % k == 0 && b % k == 0) {
        cout << "Both";
        } else if (a % k == 0 && b % k != 0) {
            cout << "Memo";
        } else if (a % k != 0 && b % k == 0) {
            cout << "Momo";
        } else {
            cout << "No One";
        }

    return 0;
}; 