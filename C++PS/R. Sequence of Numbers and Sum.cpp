// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
        
        for(int i=0; i<3; i++) {
            int n1, n2;
                cin >> n1 >> n2;
                int min = 0; int max = 0; int sum = 0;
                    if(n1 > n2) {
                        min = n2;
                        max = n1;
                    } else {
                        min = n1;
                        max = n2;
                    };
                    
                for(int i=min; i<=max; i++) {
                    sum+=i;
                    if(i <= 0) 
                        continue;
                   cout << i << " ";
                }
                   cout << "sum =" << sum;
                   cout << endl;
        }
       
    return 0;

}; 