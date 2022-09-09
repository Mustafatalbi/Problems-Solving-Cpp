#include <iostream>
using namespace std;

int main() {
   int i = 1;
   do {
        char c; cin >> c;
          if (c == 'z') 
            c = '`';
        c++;
         cout << c;
   } while(i < 10);
    return 0;
}; 
