#include <iostream>
using namespace std;

int main() {
    int test, result = 0, flag = 1, min;
        cin >> test;
        while(test--) {
        int loop; cin >> loop;
            int a[loop]; 
                for(int i=0; i<loop; i++) 
                    cin >> a[i];

            for(int i=0; i<loop; i++) {
                int v = a[i];  int arr[i];
                    for(int e=i+1; e<loop; e++) {
                      result = (v+a[e]) + (e - i); // 
                    if ( flag == 0 && min > result ) {
                        min = result;
                    }
                    if (flag) {
                        min = result;
                        flag = 0;
                    }
                    result = 0;
                    }
            } 
            flag = 1;
              cout << min << endl;
        }

    return 0;
}; 