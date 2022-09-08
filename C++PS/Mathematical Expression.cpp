#include <iostream>
using namespace std;
void validate(int res, int myRes) {
        if (res == myRes)
            cout << "Yes";
            else 
            cout << "Wrong The True Is: " << myRes;
};
int main() {
     int a, b; char sym1, sym2; double res;
     int myRes = 0;
     cin >> a >> sym1 >> b >> sym2 >> res; 
     
    switch(sym1) {
        case '+': {
            myRes = a + b;
            validate(res, myRes);
        } break;
        case '-': {
            myRes = a - b;
            validate(res, myRes);
        } break;
        case '*': {
            myRes = a * b;
            validate(res, myRes);
        } break;
        case '/': {
            myRes = a / b;
            validate(res, myRes);
        } break;
    }
    
    return 0;
};

