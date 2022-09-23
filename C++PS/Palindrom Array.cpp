// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
        int loop; cin >> loop; int flag = 0;
            int a[loop]; int rev[loop];
            for(int i=0; i<loop; i++) {
                cin >> a[i];
            };
                for(int e=0; e<loop/2; e++) {
                      if (a[e] != a[loop - 1 - e]) {
                          flag = 1;
                          break;
                      }
                }
               if (flag == 0) {
                   cout << "YES";
               } else {
                   cout << "NO";
               }
    return 0;
}; 