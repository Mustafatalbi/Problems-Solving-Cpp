 #include <iostream>
 using namespace std;

int main() {
    int x;
    int n; cout << "Insert\n"; cin >> n; // 123 => odd
   
    while(n >= 10) {
        n/=10;
    };
    n % 2 == 0 ? cout << "Even" : cout << "Odd";
    
    return 0;
};