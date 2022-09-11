#include <iostream>
using namespace std;

int main() {
    double n, k, a;
    cin >> n >> k >> a;
        double result = (n*k)/a; // 23.33 // 12 // 4253712137
        cout << result << endl; // 
        long long v = result; // 23.33 => 23;  
            double res = result - v; // 23.33 - 23 = 0.33; 
            
        if(result <= 2147483647 && result >= -2147483648 && res == 0) {
            cout << "Int";
        } else if (result > 2147483647 && res == 0) {
            cout << "Long Long";
        } else if (res > 0) {
            cout << "Double";
        };
  
    return 0;
}; 
