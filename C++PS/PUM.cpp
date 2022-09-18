#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n; int v = 1;
        for(int i=1; i<=n; i++) {
            cout << v << " " << v+1 << " " << v+2 << " ";
            cout << "PUM" << endl;
            v+=4;
        }
}; 
