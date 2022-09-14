#include <string>
using namespace std;

int main() {
        string n; cin >> n;
        int size = n.size(); int Myn1, Myn2;
            char n2[size]; int count = 0;
        for(int i=size-1; i>=0; i--) {
            n2[count] = n[i];
            count++;
        };
            
        Myn1 = stoi(n);
        Myn2 = stoi(n2);
       
       Myn1 == Myn2 ? cout << "YES" : cout << "NO";
        
    return 0;
}; 