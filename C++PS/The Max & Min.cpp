#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cout << "Insert First Number: \n"; cin >> a;
    cout << "Insert Second Number: \n"; cin >> b;
    cout << "Insert Third Number: \n"; cin >> c;
    
    if (a > b && a > c) 
    cout << "The Biggest: " << a << endl;
    if (b > a && b > c)
    cout << "The Biggest: " << b << endl;
     if (c > a && c > b)
    cout << "The Biggest; " << c << endl;
    
    if (a < b && a < c) 
    cout << "The Smallest: " << a << endl;
    if (b < a && b < c)
    cout << "The Smallest: " << b << endl;
    if (c < a && c < b)
    cout << "The Smallest; " << c << endl;
    return 0;
}; 