// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
  do {
        srand(time(0));  int c1[4]; int AnotherChoice; int CodeInfo[4];int NewCode[4]; int vcv[3];
    int newPass2[4]; string Email; int Confvcv[4];
    int arr1[4], arr2[4]; char ch; int phone[10]; int newPass[4];
       int CodeNum = 0+rand()%(9-0+1);
    
    int CodeNum2 = 0+rand()%(9-0+1);
    int CodeNum3 = 0+rand()%(9-0+1);
    int CodeNum4 = 0+rand()%(4-0+1);
    cout << "Please Insert The CodeBank \n";
    for(int i=0; i<4; i++) {
        cin >> arr1[i];
    }
    cout << "Confirm The Password \n";
     for(int i=0; i<4; i++) {
        cin >> arr2[i];
    }
    arr1[0] == arr2[0] && arr1[1] == arr2[1] && arr1[2] == arr2[2] && arr1[3] == arr2[3]
    ? cout << "Confirmed Password :) \n"
    : cout << "Wrong Password! \n";
    
    while ( arr1[0] != arr2[0] || arr1[1] != arr2[1] || arr1[2] != arr2[2] || arr1[3] != arr2[3]) {
        cout << "\n You Want Help ? \n"; 
        cout << "Insert y For Yes And n For No \n";
        cin >> ch;
    if (ch == 'y') { cout << "Put Ur Phone To Send U Code \n"; } 
        
        else { cout << "Select Another Choices \n"; 
    cout << "1) Email || 2) Id-User || else for Call Agency \n";
                 cin >> AnotherChoice;
        if (AnotherChoice == 1) {
            cout << "Insert Your Email \n";
            cin >> Email;
           cout << "We're Send The Code Tp Ur Email\n";
            cout << "The Code Is : (" <<  CodeNum <<" "<< CodeNum2 << " "<< CodeNum3 <<" " << CodeNum4 << ")";
            cout << " Put The Code Confermition \n";
            for(int i=0; i<4; i++)
            cin >> CodeInfo[i];
                if (CodeInfo[0] == CodeNum && CodeInfo[1] == CodeNum2 && CodeInfo[2] == CodeNum3 && CodeInfo[3] == CodeNum4) {
                    cout << "Code Confirmed \n";
                    cout << "-------------- \n";
                    cout << "Put New Password \n";
                for(int i=0; i<4; i++)
                    cin >> NewCode[i];
                cout << "Code Accepted Change \n";
                }
        } else if (AnotherChoice == 2) {
            cout << "Put Id VCV \n";
            for(int i=0; i<3; i++) {
            cin >> vcv[i];
            if(vcv[i] == 3) {
                cout << "Confirmed With Accepte \n";
         cout << "Ur Code Is: (" <<  CodeNum <<" "<< CodeNum2 << " "<< CodeNum3 <<" " << CodeNum4 << ")";
                    cout << " Put The Code To Confirm\n";
                    for(int i=0; i<4; i++) {
                        cin >> Confvcv[i];
                    
                        if (Confvcv[0] == CodeNum && Confvcv[1] == CodeNum2 && Confvcv[2] == CodeNum3 && Confvcv[3] == CodeNum4) {
                            cout << "Enter New Password \n";
                            int passcode[4];
                            for(int i=0; i<4; i++)
                            passcode[i];
                            cout << "Code Changed \n";
                        } else if (Confvcv[0] != CodeNum && Confvcv[1] != CodeNum2 && Confvcv[2] != CodeNum3 && Confvcv[3] != CodeNum4) {
                             cout << "Wrong! Try Again \n";
                             for(int i=0; i<4; i++)
                             cin >> Confvcv[i];
                         }
                            
                        
                    }
            }
            }
        } 
        return 0;
        };
                  for(int i=0; i<10; i++) 
                      cin >> phone[i]; 
                      cout << " This Ur Code's Confirm \n";
    cout << CodeNum <<" "<< CodeNum2 << " "<< CodeNum3 <<" " << CodeNum4;
    cout << "\n Put The Code To Confirmed \n";
    for (int i=0; i<4; i++)
    cin >> c1[i];
    
     if (CodeNum == c1[0] && CodeNum2 == c1[1] && CodeNum3 == c1[2] && CodeNum4 == c1[3]) {
        cout << "The Code Was Accepted :) \n";
        cout << "Enter The New Password \n";
        for (int i=0; i<4; i++)
        cin >> newPass[i]; 
        
        cout << " The Code Was Modified \n \n";
        for(int i=0; i<4; i++)
        cout << "The Current Code |" << newPass[i] << "| \n";
        cout << "--------------------------\n\n";
         cout << "Please Insert The CodeBank \n";
    for(int i=0; i<4; i++) {
        cin >> arr1[i]; // Code Bank After Edit 
        if (arr1[i] == newPass[i]) 
            cout << "Code Accepted a Confirmation \n";
        if (arr1[i] != newPass[i]) {
            cout << "The Code Isn't Work! Try Again\n";
            for (int i=0; i<4; i++)
            cin >> arr1[i];
        }
    }
         
     }
    }          
    
  } while (true);
  return 0;  
}; 