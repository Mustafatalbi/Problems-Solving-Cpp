#include <iostream>
using namespace std;

int main()
{
    int arr[5], arr2[5];
    int arr3[10];
    cout << "Insert Array Members: \n";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    for (int i = 0; i < 5; i++)
        cin >> arr2[i];

    for (int i = 0; i < 5 + 5; i++)
        if (i < arr[i])
            arr3[i] = arr[i];
        else
            arr3[i] = arr2[i - 5];

    for (int i = 0; i < 10; i++)
        cout << arr3[i] << " ";
};
