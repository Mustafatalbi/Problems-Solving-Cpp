#include <iostream>
using namespace std;

int main() {
        int a, b, c; 
        cin >> a >> b >> c;
        int max, middl, min;
        if (a > b && a > c) {
            max = a;
            if(b > c) {
            middl = b;
            min = c;
            } else {
            middl = c;
            min = b;
            }
        } else if (b > a && b > c) {
            max = b;
            if(a > c) {
              middl = a;
              min = c;
            } else {
               middl = c;
               min = a;
            }
        } else if (c > a && c > b) {
            max = c;
            if(a > b) {
               middl = a;
               min = b;
            } else {
               middl = b;
               min = a;
            }
        };
        cout << min << " " << middl << " " << max;
        cout << endl << endl;
        cout << a << " " << b << " " << c;
        
    return 0;
}; 
