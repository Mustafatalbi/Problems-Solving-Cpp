// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int size; cin >> size;
        int start = 0, end = 1;
            if(size == 1) {
                cout << start <<endl;
            } else if (size == 2) {
                cout << start << " " << end << endl;
            } else {
              cout << start << " " << end << " ";
               for(int i=2; i<size; i++) {
                   int res = start + end;
                   cout << res << " ";
                   start = end;
                   end = res;
               }
            };
    
    return 0;
}; 
