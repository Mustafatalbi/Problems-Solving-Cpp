#include <iostream>
using namespace std; 

int main() {
    int test; cin >> test;
        while(test--) {
            int loop; cin >> loop;
                int a[loop]; int result = 0;
                for(int i=0; i<loop; i++)
                    cin >> a[i];
                
              result = loop; // 5 [1,2,3,4,5] 
              int i=0, z=0;
                while (1) {
                    if (z == loop - 1) 
                        break;
                        if (a[i] > a[i+1]) {
                            z++;
                            i = z;
                            continue;
                        }
                    result++;
                    i++;
                    if (i == loop - 1) {
                        z++;
                        i = z;
                    }
                }
                cout << result << endl;
        }

    return 0;
}; 