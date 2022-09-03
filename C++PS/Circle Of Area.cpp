#include <iostream>
using namespace std;

int main() {
    double r = 3.141592653; float R2;
        cout << "Insert R2 \n";
         cin >> R2;
    double Area = r* R2*R2;
        cout << fixed << setprecision(9) << Area << endl;
   
    return 0;
}; 