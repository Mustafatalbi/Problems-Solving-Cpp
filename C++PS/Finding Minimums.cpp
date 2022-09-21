#include <iostream>
using namespace std;

int main() {
        int loop, seq; cin >> loop >> seq; // 8 4
        int flag = 1; int min; int count = 0;
            for(int i=1; i<=loop; i++) { // 1 --> 8
                int val; cin >> val; // 1 2 3 4 5 6 7 8
                if(flag) { // true 
                    min = val; // min == 1 
                    flag = 0; // for entre to else
                } else {
                    if (val < min) { // if 2 < 1 
                    min = val; // min = 2 if true but it's false
                    }
                }
                count++; 
                    if (count == seq || i == loop) {
                        cout << min << " ";
                        count = 0;
                        flag = 1;
                    }
            }; 
    return 0;
}; 