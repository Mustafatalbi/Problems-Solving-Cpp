#include <iostream>
using namespace std; 

int main() {
        int n1, n2; cin >> n1 >> n2; // 3 3 
            string code; cin >> code; // 234-245
      if (n1+n2+1 != code.size()) {
          cout << "No" << endl;
          return 0;
      } 
        if (code[n1] != '-') {
             cout << "No" << endl;
                return 0;
        } 
        int c = 0;
            for(int i=0; i<code.size(); i++) {
                if (code[i] >= 48 && code[i] <= 57 && i != n1) {
                    c++;
                }
            }
            if ( c == (n1+n2) ) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
    return 0;
}; 