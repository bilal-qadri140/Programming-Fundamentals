#include <iostream>
using namespace std;
int main()
{
    int size; // size variable for getting size of array from user
    system("cls");
    // getting size
    cout << "Enter size of Array:  ";
    cin >> size;
    system("cls");
    int arr[size]; // declaring array 
    cout << "Enter Array elements: " << endl; 
    // input array elements from user
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]  ";
        cin >> arr[i];
    }
    system("cls");

    // Traverse an Array
    cout << "Array elements are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}