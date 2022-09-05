#include <iostream>
using namespace std;

int main() {
    int Days; cin >> Days;
    int year = Days / 365; // convert days to years
    Days -= year*365; // 1000 - 730 = 270 
    int months = Days / 30 ; // 1000 / 30 = 33 
    Days -= months * 30; // 1000 - 990 = 10 
    int days = Days;
    
    cout << year << endl;
    cout << months << endl;
    cout << days << endl;
    
    return 0;
};

