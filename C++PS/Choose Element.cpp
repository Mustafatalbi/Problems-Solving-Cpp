#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std; 

int main() {
        long long size, choose; cin >> size >> choose;
        long long a[size]; long long sum = 0;
            for(long long i=0; i<size; i++)
                cin >> a[i];
            
           sort(a,a+size);
           reverse(a,a+size);
          
            for(long long i=0; i<choose; i++) 
                sum+=a[i];
            
        cout << sum << endl;
    return 0;
}; 
