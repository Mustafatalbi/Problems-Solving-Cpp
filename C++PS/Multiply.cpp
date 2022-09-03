#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Insert First Number: \n"; cin >> a;
    cout << "Insert Second Number: \n"; cin >> b;

    a % b == 0 || b % a == 0 ? cout << "Multiply \n" : cout << "No Multiply \n";

    return 0;
}; 