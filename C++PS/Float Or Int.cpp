#include <iostream>
using namespace std;

int main() {
        double n; cin >> n; // 12.3
        int v = n; // 12.00
        double res = n - v; // 12,3 - 12.00 = 0,3 
        res > 0 ? cout << "Float" : cout << "Int";
      
    return 0;
}