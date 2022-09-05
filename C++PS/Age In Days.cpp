#include <iostream>
using namespace std;

int main() {
    int Days; cin >> Days; // 1000
    int year = Days / 365; // convert days to years
    Days -= year*365; // 1000 - 730 = 270 
    int months = Days / 30 ; // 270 / 30 = 9 
    Days -= months * 30; // 270 - 270 = 0 
    int days = Days;
    
    cout << year << endl; // 2
    cout << months << endl; // 9
    cout << days << endl; // 0
    
    return 0;
};

