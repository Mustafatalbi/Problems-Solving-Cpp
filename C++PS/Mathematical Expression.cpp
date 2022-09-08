#include <iostream>
using namespace std;

int main() {
     int a, b; char sym1, sym2; double res;
     cin >> a >> sym1 >> b >> sym2 >> res; 
     if (sym1 == '+' && sym2 == '=' && (a + b) == res) {
         cout << "Yes \n";
     } else if (sym1 == '-' && sym2 == '=' && (a - b) == res) {
         cout << "Yes \n";
     } else if (sym1 == '*' && sym2 == '=' && (a * b) == res) {
         cout << "Yes \n";
     } else if (sym1 == '/' && sym2 == '=' && (a / b) == res) {
         cout << "Yes \n";
     } else {
       if (sym1 == '+' && sym2 == '=' && (a + b) != res) {
           cout << "False The True Is: "<< a+b;
       } else if (sym1 == '-' && sym2 == '=' && (a - b) != res) {
           cout << "False The True Is: "<< a-b;
     } else if (sym1 == '*' && sym2 == '=' && (a * b) != res) {
           cout << "False The True Is: "<< a*b;
     } else if (sym1 == '/' && sym2 == '=' && (a / b) != res) {
           cout << "False The True Is: "<< (a/b);
     };
   
    return 0;
}
}
