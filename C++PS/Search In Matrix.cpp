#include <iostream>
using namespace std;

int main() {
    int row, column; cin >> row >> column;
         int arr[row][column]; 
          int flag = 0;
        
        for(int i=0; i<row; i++) 
                for(int e=0; e<column; e++) 
                    cin >> arr[i][e];
                    
        int a; cin >> a;
        
            for(int i=0; i<row; i++) {
                for(int e=0; e<column; e++) {
                    if (arr[i][e] == a) {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1) {
                cout << "will not take number" << endl;
            } else {
                cout << "will take number" << endl;
            }

    return 0;
}; 