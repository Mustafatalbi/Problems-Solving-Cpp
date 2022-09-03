#include <iostream>
using namespace std;

int main() {
    long long Num1 , Num2; char ch;
    cout << "Insert First Num \n";
    cin >> Num1;
    cout << "Insert Symbole (+ - * /) \n";
    cin >> ch;
    cout << "Insert Second Num \n";
    cin >> Num2;
    switch(ch) {
        case '+': {
            cout << "The Result Is: " << Num1 + Num2 << endl;
        }break;
        case '-': {
             cout << "The Result Is: " << Num1 - Num2 << endl;
        }break;
        case '*': {
             cout << "The Result Is: " << Num1 * Num2 << endl;
        }break;
        case '/': {
             cout << "The Result Is: " << Num1 / Num2 << endl;
        }break;
        default: {
            cout << "Please Insert Right Symbole \n"; 
        }
    }
   

    return 0;
}