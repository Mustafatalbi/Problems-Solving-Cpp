#include <iostream>
using namespace std;

int main() {
    int a,b, c,d; int start, end;
        cin >> a >> b >> c >> d;
        if ((c < a && d < a) || (c > b && d > b)) {
        cout << -1; 
        } else {
            if (a > c) { // 1 > 2 
                start = a; // 1 
            } else { 
                start = c; // 2 
            }
            if (b > d) {
                end = d;
            } else {
                end = b;
            }
            cout << start << " " << end;
            
        }
       
       
    return 0;
}; 