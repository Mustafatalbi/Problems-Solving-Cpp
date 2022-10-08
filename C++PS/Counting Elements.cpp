#include <iostream>
#include <algorithm>
using namespace std;

int main() {
         int size; cin >> size;
            int a[size];
            for(int i=0; i<size; i++)
                cin >> a[i];
            
             int c = 0;
              int ar;
            for(int i=0; i<size; i++) {
                ar = (a[i]) +1;
                for(int e=0; e<size; e++) {
                    if (a[e] == ar) {
                        c++;
                        break;
                    }
                }
            }
    cout << c << endl;
    return 0;
}; 