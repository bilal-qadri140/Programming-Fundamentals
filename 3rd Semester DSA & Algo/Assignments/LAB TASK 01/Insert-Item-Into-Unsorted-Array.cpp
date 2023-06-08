#include <iostream>
using namespace std;
int main()
{
    int size;              // used for size of an array
    int index, new_ele, i; // index for index of element that is to placed
                           // new_ele for new element to be placed
                           // i for iterations

    cout << "Enter size of an Array:  ";
    cin >> size; // input size of array
    system("cls");
    int arr[size]; // declaring the array
    cout << "Enter Array elements: " << endl; // getting elements from user
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]  ";
        cin >> arr[i];
    }
    system("cls");
    cout << "\nArray elements Before Inserting: " << endl; // display array before inserting the element
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    system("cls");
up:
    cout << "Enter Index position to Insert an element:  "; // getting index position were element should be inserted
    cin >> index;
    if (index >= 0 && index <= size)
    {
        cout << "Enter element to Insert:  "; // getting element from user
        cin >> new_ele;
        system("cls");
        i = size - 1;

        // Logic part
        while (i >= index)
        {
            arr[i + 1] = arr[i];
            i -= 1;
        }
        arr[index] = new_ele;
        size += 1;
        cout << "\n\nArray elements After Inserting: " << endl; // display after inserting
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        system("cls");
        
        goto up;
    }

    return 0;
}