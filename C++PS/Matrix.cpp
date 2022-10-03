#include <iostream>
using namespace std;

int main() {
    long long size;
    cin >> size;
    long long arr[size][size];
        for(int i=0; i<size; i++) 
            for(int e=0; e<size; e++) 
                cin >> arr[i][e];
        
        long long sum = 0, sum2 = 0; 
         for(int i=0; i<size; i++) {
            for(int e=0; e<size; e++) {
                 if (i == e) {
                    sum+=arr[i][e];
                }
                    if (size - 1 - e == i) {
                        sum2+=arr[i][e];
                    }
            }
        }
            cout << abs(sum - sum2) << endl;
    return 0;
};