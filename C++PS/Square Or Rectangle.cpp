#include <iostream>
using namespace std; 

void SquareOrRectangel(float l, float w);
int main() {
        long long testCase; cin >> testCase;
            while (testCase--) {
                long long length, width;
                    cin >> length >> width;
                SquareOrRectangel(length, width);
            };
    return 0;
};
void SquareOrRectangel(float l, float w) {
        if (l == w) 
            cout << "Square" << endl;
        else 
            cout << "Rectangle" << endl;
};
