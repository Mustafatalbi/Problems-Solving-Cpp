#include <iostream>
using namespace std;

int main()  {
              long long n;
                   cin >> n;
              long long f[n];
                  f[0] = 0 ; f[1] = 1; // [0,1, ]
                      for(int i=2; i< n; i++) 
                        f[i] = f[i-1] + f[i-2]; 
                        // [0,1, ] == (i-1)(1) + (i-2)(0)
                        // 1 + 0 = 1
                  cout << f[n-1]; 
    };