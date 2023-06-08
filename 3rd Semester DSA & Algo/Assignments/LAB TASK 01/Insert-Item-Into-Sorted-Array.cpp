#include <iostream>
using namespace std;
int main()
{
    int size;       // used for size of an array
    int new_ele, i; // new_ele for new element to be placed
                    // i for iterations

    cout << "Enter size of an Array:  ";
    cin >> size; // input size of array
    system("cls");
    int arr[size]; // declaring the array
    cout << "Enter Array elements in assending order: " << endl;
    for (int i = 0; i < size; i++) // getting elements from user in assending order
    {
        cout << "arr[" << i << "]  ";
        cin >> arr[i];
    }
    system("cls");
    cout << "\nArray elements Before Inserting: " << endl; // display array before
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    system("cls");

    cout << "Enter element to Insert:  "; // getting element from user
    cin >> new_ele;
    system("cls");

    // Logic part
    i = size - 1;
    while (new_ele < arr[i] && i >= 0)
    {
        arr[i + 1] = arr[i];
        i -= 1;
    }
    arr[i + 1] = new_ele;
    size += 1;
    cout << "\n\nArray elements After Inserting: " << endl; // display after inserting
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}