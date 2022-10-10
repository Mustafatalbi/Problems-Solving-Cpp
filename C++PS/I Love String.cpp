#include <iostream>
using namespace std;

int main() {
    int test; cin >> test;
    
        while (test--) {
            
          string str, str2; cin >> str >> str2;
          int size = str.size() + str2.size();
          
          int flag1 = 1, flag2 = 1;
            for(int i=0; i<size; i++) {
                
                if (str.size() != i && flag1) {
                      cout << str[i];
                } else {
                    flag1 = 0;
                }
                if (str2.size() != i && flag2) {
                      cout << str2[i];
                } else {
                    flag2 = 0;
                }
            }
            cout << endl;
        }; 
    return 0;
};