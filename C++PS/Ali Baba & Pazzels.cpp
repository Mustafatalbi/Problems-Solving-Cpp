// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a,b , c , c3; int flag = 0;
    cin >> a >> b >> c >> c3;
      
      long long MyRes = (a * b) - c;
      long long MyRes2 = (a * b) + c;
      long long MyRes3 = a + (b * c);
      long long MyRes4 = a - (b - c);
      long long MyRes5 = (a - b) + c;
      long long MyRes6 = (a + b) - c;
      if (MyRes == c3 || MyRes2 == c3 || MyRes3 == c3 || MyRes4 == c3 || MyRes5 == c3 || MyRes6 == c3) {
          flag = 1;
      }
      flag == 1 ? cout << "YES" : cout << "NO";
 
    return 0;
}; 
