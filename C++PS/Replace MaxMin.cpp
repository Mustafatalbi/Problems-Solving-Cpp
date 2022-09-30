#include <iostream>
using namespace std;

int main() {
        int loop; cin >> loop;
            int a[loop];
            for(int i=0; i<loop; i++)
                cin >> a[i]; // [4,1,3,10,8]
            int indexMax, indexMin; 
                int min = a[0], max = 0; 
                
                for(int i=0; i<loop; i++) {
                    if (a[i] < min) {
                        min = a[i];
                    } else if (a[i] > max) {
                        max = a[i];
                    }
                };
                for(int y=0; y<loop; y++) {
                        if (min == a[y]) {
                            a[y] = max;
                        } else if (max == a[y]) {
                            a[y] = min;
                        }
                        
                }
                for(int u=0; u<loop; u++)
                    cout << a[u] << " ";
                
    return 0;
}; 