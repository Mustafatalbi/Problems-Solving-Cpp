#include <iostream>
#include <cmath>
using namespace std;

int main()
{
       int n; cin >> n;
            long long num;
        for(int i=0; i<n; i++) {
            cin >> num;
                int ones = 0;
            while(num > 0) {
                if (num % 2 == 1) {
                    ones++;
                }
                num/=2;
            }
            long long sum = 0;
                for(int e=0; e<ones; e++) {
                    sum+= 1 * pow(2, e);
                }
        cout << sum;
        }
}; 

