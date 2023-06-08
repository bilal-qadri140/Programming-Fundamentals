#include <iostream>
using namespace std;
int main()
{
    int Pos, size; // pos for index no and size for size of array

    // input array size from user
    cout << "Enter size of an Array:  ";
    cin >> size;
    system("cls");
    int arr[size]; // declaring array of size user want's
    cout << "Enter Array elements: " << endl; // input array elements from user
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]  ";
        cin >> arr[i];
    }
    // display elements before deleting
    cout << "\nArray elements Before Deleting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // getting index from user to delete element 
    cout << "\nEnter Array Index to delete an element: ";
    cin >> Pos;
    // logic to delete the element
    while (Pos < size)
    {
        arr[Pos] = arr[Pos + 1];
        Pos += 1;
    }
    size -= 1; // decrement the array size by 1

    cout << "\nElement deleted successfully!";
    cout << endl;
    system("pause");
    system("cls");

    // display elements after deleting
    cout << "\n\nArray elements After Deleting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}