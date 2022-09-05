#include <iostream>
using namespace std;

int main() {
        float interval; cout << "Insert \n";
        cin >> interval;
            if (interval >= 0 && interval <= 25.00) {
                cout << "interval (0, 25] \n";
            } else if (interval > 25.00 && interval <= 50.00) {
                cout << "interval (25, 50] \n";
            } else if (interval > 50.00 && interval <= 75.00) {
                cout << "interval (50, 75] \n";
            } else if (interval > 75.00 && interval <= 100.0) {
                cout << "interval (75, 100] \n";
            } else {
                cout << "Out Of The Rang \n";
            }
    
    return 0;
}; 
