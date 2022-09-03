#include <cmath>
using namespace std;

int main() {
    float a, b;
    cout << "Insert Float 2 Numbers: \n";
    cin >> a >> b;
    
    float re = a/b;
    cout << "Round: ";
    cout << a << " / " << b << " = " << round(re) << endl;
      cout << "ceil: ";
    cout << a << " / " << b << " = " << ceil(re) << endl;
    cout << "floor: ";
    cout << a << " / " << b << " = " << floor(re) << endl;
    return 0;
}; 