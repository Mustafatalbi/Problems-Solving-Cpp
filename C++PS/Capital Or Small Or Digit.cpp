#include <iostream>
using namespace std;

int main() {
    char a; cout << "Insert a Character \n"; cin >> a;
    
    if ( a >= 65 && a <= 90) {
    cout << "Alpha \n Is Capital \n";
    } else if (a >= 97 && a <= 122) {
      cout << "Alpha \n Is Small \n";
    } else if (a >= 48 && a <= 57) {
        cout << "Is Digit \n";
    } else {
        cout << "Not Of The Rang \n";
    }
    return 0;
}; 