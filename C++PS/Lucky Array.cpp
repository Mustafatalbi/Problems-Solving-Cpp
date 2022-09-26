#include <iostream>
using namespace std;

int main() {
        int loop; cin >> loop;
            int a[loop], flag = 1, min, c = 0;
                for(int i=0; i<loop; i++)
                    cin >> a[i];
                    for(int i=0; i<loop; i++) {
                        if (flag == 1) {
                            min = a[i];
                            flag = 0;
                        }
                        if (flag == 0 && min > a[i]) {
                            min = a[i];
                        }
                        if (a[i] == min) {
                            c++;
                        }
                    }
                        if (c % 2 == 0) {
                            cout << "Unlucky" << endl;
                            
                        } else {
                            cout << "Lucky" << endl;
                        }
    return 0;
}; 