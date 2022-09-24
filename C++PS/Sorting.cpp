// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() { 
        int loop; cin >> loop; // 5
            int a[loop];  
            for(int i=0; i<loop; i++) 
                cin >> a[i]; // 1 2 3 4 5
        
               for(int i=0; i<loop-1; i++) {
                  int index;  int flag = 0;
                   int v = a[i];
                   for(int c=i+1; c<loop; c++) {
                       if (a[c] < v) {
                           index = c;
                           v = a[c];
                           flag = 1;
                       }
                   }
                 if (flag == 1) {
                           int temp = a[i];
                           a[i] = v;
                           a[index] = temp;
                  }
               }
               for(int i=0; i<loop; i++) 
                   cout << a[i] << " ";
               
          
    return 0;
}; 