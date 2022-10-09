#include <iostream>
using namespace std;

int main() {
        int test; cin >> test;
            while (test--) {
                string str; cin >> str;
                for(int i=0; i<str.size(); i++) {
                    int v = str.size();
        if (str.size() < 10) {
                 cout << str << endl;
                  break;
        } else if (str.size() >= 10) {
            cout << str[0] << str.size()-2 << str[v-1] << endl;
                        break;
                    }
                }
            }
    return 0;
}; 