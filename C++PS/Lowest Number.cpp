// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
        int loop; cin >> loop;
             int a[loop];
            for(int i=0; i<loop; i++) {
                 cin >> a[i];
            };
             int min = a[0]; int index;
              for(int i=0; i<loop; i++) {
                  if (a[i] < min) 
                      min = a[i];
                      index = i-1; // 0 1 2 3 4
                      
              }
                  cout << min << " " << index << endl;
    return 0;
}; 