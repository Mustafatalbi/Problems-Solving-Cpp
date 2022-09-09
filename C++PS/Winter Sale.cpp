#include <iostream>
using namespace std;

int main() {
      double discount, price;
        cin >> discount >> price;
    double pre = 100 - discount;
        double priceRes = price / pre;
        double result = (discount*priceRes) + price;
        cout << result;

    return 0;
}; 
