// Online C++ compiler to run C++ program online
 #include <iostream>
 #include <string>
 using namespace std;

int main() {
    string TheCalcString; char Symbol; int indexSymbol;
    string Num1, Num2;
    int Num1Int, Num2Int;
    cout << "Insert The Calculation As String \n";
    cin >> TheCalcString;
    for(int i=0; i<TheCalcString.size(); i++) {
        if (TheCalcString[i] == '+' || TheCalcString[i] == '-' ||TheCalcString[i] == '*' || TheCalcString[i] == '/') {
            Symbol = TheCalcString[i]; // Symbol
            indexSymbol = i; // The Index Of Symbol
            break;
        }
    };
    Num1 = TheCalcString.substr(0, indexSymbol);
    Num2 = TheCalcString.substr(indexSymbol+1);
    
    Num1Int = stoi(Num1);
    Num2Int = stoi(Num2);
    
    switch(Symbol) {
        case '+': {
            cout << Num1Int + Num2Int;
        } break;
        case '-': {
             cout << Num1Int - Num2Int;
        } break;
        case '*': {
             cout << Num1Int * Num2Int;
        } break;
        case '/': {
             cout << Num1Int / Num2Int;
        } break;
    };
  
    return 0;
};