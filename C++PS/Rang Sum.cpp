#include <iostream>
using namespace std; 

int main() {
        long long s; cin >> s;
            while(s--) {
                long long r1, r2; 
                long long mi, ma;
                cin >> r1 >> r2;
                ma = max(r1,r2);
                mi = min(r1,r2);
                mi--;
            long long result = mi*(mi+1) / 2; // 4*(4+1) / 2 = 8
            // 4 * 5 == 20 / 2 == 10 ? (1+2+3+4) == 10;
            long long result2 = ma*(ma+1) / 2;
             result > result2 
                    ? cout << result - result2
                    : cout << result2 - result;
                      cout << endl;
                      };
    return 0;
};  