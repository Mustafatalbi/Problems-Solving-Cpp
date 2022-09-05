#include <iostream>
using namespace std;

int main() {
        int a, b, c; 
        cin >> a >> b >> c;
        int max;
        if (a > b && a > c) {
            max = a;
            if(b > c) {
                cout << a << endl << b << endl << c;
                cout << endl << endl;
                cout << a << endl << b << endl << c;
            } else {
                cout << a << endl << c << endl << b;
                cout << endl << endl;
                cout << a << endl << b << endl << c;
            }
        } else if (b > a && b > c) {
            max = b;
            if(a > c) {
                cout << b << endl << a << endl << c;
                cout << endl << endl;
                cout << a << endl << b << endl << c;
            } else {
                cout << b << endl << c << endl << a;
                cout << endl << endl;
                cout << a << endl << b << endl << c;
            }
        } else if (c > a && c > b) {
            max = c;
            if(a > b) {
                cout << c << endl << a << endl << b;
                cout << endl << endl;
                cout << a << endl << b << endl << c;
            } else {
                cout << c << endl << b << endl << a;
                cout << endl << endl;
                cout << a << endl << b << endl << c;
            }
        };    
    return 0;
};      
