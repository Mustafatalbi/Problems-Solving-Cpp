#include <iostream>
using namespace std;

int main() {
     int A, B;
      cout << "Put The First Num \n"; cin >> A;
    char symbol; cout <<"Insert The Symbol \n"; cin >> symbol;
    cout << "Put The Second Num \n"; cin >> B;
    
    switch(symbol) {
        case '<': {
            A < B ? cout << "True" : cout << "False";
        } break;
        case '>': {
            A > B ? cout << "True" : cout << "False";
        } break;
        case '=': {
            A == B ? cout << "True" : cout << "False";
        } break;
    }
    
    return 0;
}