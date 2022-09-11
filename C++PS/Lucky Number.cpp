#include <iostream>
using namespace std;

int main() {
    int a; cout << "Insert Two Digits (10,99) \n"; cin >> a;
        int FirstDG = a%10; // Get Last Digit
        int SecondDG = a/=10; // Get First Digit
            if (FirstDG == 0) {
                cout << "Lucky Number";
                return 0;
            }; 
        if (FirstDG % SecondDG == 0 || SecondDG % FirstDG == 0 ) {
                cout << "Lucky Number";
            } else {
                cout << "Not Lucky ";
            };
            
    return 0;
}; 