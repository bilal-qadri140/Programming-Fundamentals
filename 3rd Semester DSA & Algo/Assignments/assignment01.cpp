#include <iostream>
using namespace std;

int size = 0;
////// -->> Traverse <<-- //////

void traverse(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]"
             << " = " << arr[i] << " " << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}

////// -->> Add-elements in an Array <<-- //////

void add_element(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << "Enter Array element at arr[" << i << "]  ";
        cin >> arr[i];
    }
    cout << endl;
    system("pause");
    system("cls");
}

////// -->> Insert element at specific position <<-- //////

void insert(int arr[])
{
    int num, pos;
    cout << "Emter Element to Insert: ";
    cin >> num;
    cout << "Enter position to add Element: ";
    cin >> pos;
    int count = size; /////
    int j = size;
    while (j >= pos)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[pos] = num;

    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nElement Inserted at arr[" << pos << "]";
    size = size + 1;
    cout << endl;
    system("pause");
    system("cls");
}

///// -->>  Delete element from a specific position <<-- //////

void Delete(int arr[])
{
    int pos;
    cout << "Enter Array Index to delete an element: ";
    cin >> pos;

    while (pos < size)
    {
        arr[pos] = arr[pos + 1];
        pos += 1;
    }

    cout << "Element deleted successfully!";
    size -= 1;
    cout << endl;
    system("pause");
    system("cls");
}

///// -->>  Search an Element from List <<-- //////
void search(int arr[])
{
    int num;
    int i;
    int check = 0;
    cout << "Enter element to find: ";
    cin >> num;
    for (i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            check++;
            break;
        }
    }
    if (check >= 1)
    {
        cout << "Element found at arr[" << i << "]";
    }
    else
        cout << "Element not found!";

    cout << endl;
    system("pause");
    system("cls");
}
///// -->>  Length of List <<-- //////

void check_size()
{
    cout << "Size of List is: " << size << endl;
    cout << endl;
    system("pause");
    system("cls");
}

///// -->>  Copy List to other list <<-- //////

void copy(int array1[])
{
    int array2[size];

    for (int i = 0; i < size; i++)
    {
        array2[i] = array1[i];
    }
    cout << "array1 is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array1[i] << " ";
    }
    cout << "\narray2 is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
    system("pause");
    system("cls");
}

///// -->>  Clear a using array list <<-- //////

void clear(int arr[])
{
    cout << "List before clear " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }

    cout << "\nArray after clear " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    system("cls");
}

///// -->>  Get element at a given position <<-- //////
void get(int arr[])
{
    int pos;
    cout << "Enter position to get an Element  ";
    cin >> pos;

    cout << "Element at given position is: " << arr[pos];
    cout << endl;
    system("pause");
    system("cls");
}

///// -->>  Replace the element at a given position with X <<-- //////
void update(int arr[])
{
    int num, pos;
    cout << "Enter element to Replace: ";
    cin >> num;
    cout << "Enter Position: ";
    cin >> pos;
    cout << "Original List is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    arr[pos] = num;

    cout << "\nUpdated List is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    system("cls");
}

int main()
{
    // int size;
    int choice;
    system("cls");
    cout << "Enter Array size ";
    cin >> size;
    int arr[size];
    system("cls");
up:
    while (1)
    {
        cout << "  _______________________________________________________\n";
        cout << " |  | 1. Add Elements\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 2. Show Elements of List\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 3. Insert Element at a particular positon\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 4. Remove Element at a particular position\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 5. Search Element X is in the List\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 6. Length of the List\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 7. Copy List to an other List\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 8. Clear a List \n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 9. Get Element at a given position\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 10. Replace the Element at a given position with X\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | Enter Your Choice | ";
        cin >> choice;
        system("cls");
        if (choice >= 1 && choice <= 10)
        {
            switch (choice)
            {
            case 1:
                add_element(arr, size);
                break;
            case 2:
                traverse(arr, size);
                break;
            case 3:
                insert(arr);
                break;
            case 4:
                Delete(arr);
                break;
            case 5:
                search(arr);
                break;
            case 6:
                check_size();
                break;
            case 7:
                copy(arr);
                break;
            case 8:
                clear(arr);
                break;
            case 9:
                get(arr);
                break;
            case 10:
                update(arr);
                break;
            }
        }
        else
            goto up;
    }
    return 0;
}