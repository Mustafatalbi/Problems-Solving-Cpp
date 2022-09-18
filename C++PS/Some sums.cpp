// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
        int n, r1,r2;  
            cin >> n >> r1 >> r2; // 20 2 5
            long long sum = 0;
            for(int i=1; i<=n; i++) { // 1 -> 20
                if(i / 10 == 0) { // i / 10 == 0 
                    // ex: 5 / 10 == 0.5 == (int)0 then it's 5
                    if(i >= r1 && i <= r2) { // 5 >= 2 && 5 <= 5
                        sum+=i; // 0+5 == 5
                    }
                } else {
                    int Myn = i; int mysum = 0; // myn = i; 
                    while(Myn != 0) { // i != 0
                        int digit = Myn % 10; // 12 % 10 == 1.2 = 2
                        mysum+= digit; 
                        Myn/=10; // 1 % 10 == 0.1 (int)0 --> 1
                    }
                    if(mysum >= r1 && mysum <= r2) { // 
                        sum+=i; // 
                    }
                }
            }
               cout << sum; // 84
    
    return 0;
}; 
