// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 
int res[1000005];
int main() {
    long long lines; cin >> lines;
         long long  c = 0;
        for(int i=0; i<lines; i++) {
        long long  n, s; cin >> n >> s; // 4 -- 6 
                if (n*(n+1)/2 < s) { // range 2 1 < 10 
                    cout << -1;
                } else {
                       long long  sum = 0;
                    for(int v=n; v>=1; v--) {
                        if (sum+v <= s) {
                            sum+=v; res[c] = v;
                            c++;
                        }
                        if (sum == s) {
                            break;
                        }
                    }
                }
                for(int x=0; x<c; x++) {
                    cout << res[x] << " ";
                }
                cout << endl;
                c = 0;
        };
        
    return 0;
}; 