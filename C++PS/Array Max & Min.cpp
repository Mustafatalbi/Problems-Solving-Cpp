#include <iostream>
using namespace std;

int main() {
       int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
            
            int max = 0; int min = arr[0];
        for(int i=0; i<n; i++) 
         arr[i] > max ? max = arr[i] : min = arr[i];
        
        cout << max << endl;
        cout << min << endl;
    
    return 0; 
}; 