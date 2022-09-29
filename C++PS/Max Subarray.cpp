// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
double Maximun(double x, double y);
int main() { 
        int test; cin >> test;
            while(test--) {
                int loop; cin >> loop;
                int a[loop];
                  for(int i=0; i<loop; i++) {
                        cin >> a[i];
                        cout << a[i] << " ";
                 };
                 int i=0, z=0, maxi;
                 while (1) {
                     if (z == loop - 1) 
                         break;
                    
                     if (i == z) 
                         maxi = Maximun(a[i], a[i+1]); 
                     else 
                         maxi = Maximun(maxi, a[i+1]);
                
                     cout << maxi << " ";
                     i++;
                     if (i == loop - 1) {
                         z++;
                         i = 1; // jrb i = 1;
                         break;
                     }
                 }
                 cout << endl;
            }
    
    return 0;
}; 
double Maximun(double x, double y) {
    if (x > y)
        return x;
    else 
        return y;
}; 
