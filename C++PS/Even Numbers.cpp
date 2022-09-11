#include <iostream>
using namespace std;

int main() {
        int a; cin >> a;
        if (a == 1) {
             cout << -1;
                return 0;
        }; 
        for(int i=1; i<=a; i++)
            if (i % 2 == 0)
            cout << i << endl;
    return 0;
}; 
