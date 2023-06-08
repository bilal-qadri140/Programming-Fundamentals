#include <iostream>
using namespace std;

int size = 0;
///////////// --> Insert Element in Array <-- /////////////

void insert(int arr[])
{
    int index, new_ele, i;
    cout << "Enter Index position to Insert an element:  ";
    cin >> index;
    cout << "Enter element to Insert:  ";
    cin >> new_ele;
    i = size - 1;
    while (i >= index)
    {
        arr[i + 1] = arr[i];
        i -= 1;
    }
    arr[index] = new_ele;
    size += 1;
    cout << endl;
    system("pause");
    system("cls");
}

///////////// --> Display Elements of an Array <-- /////////////

void display(int arr[])
{
    cout << "\nElements of Array are: \t";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    system("cls");
}
///////////// --> Replace the element at a given position <-- /////////////

void replace(int arr[])
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
int main()
{
    int choice;
    cout << "Enter size of an array: ";
    cin >> size;
    int arr[size];

    cout << "Enter Array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]  ";
        cin >> arr[i];
    }
    cout << endl;
    system("pause");
    system("cls");
up:
    while (true)
    {

        cout << "  ____________________________________________________\n";
        cout << " |  | 1. Display Elements of Array\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 2. Insert Element in Array\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 3. Replace Element in an Array\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 4. Delete Element from an Array\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | 5. EXIT from Program\n";
        cout << " |   ____________________________________________________\n";
        cout << " |  | Enter Your Choice | ";
        cin >> choice;
        system("cls");
        if (choice >= 1 && choice <= 5)
        {
            switch (choice)
            {
            case 1:
                display(arr);
                break;
                goto up;
            case 2:
                insert(arr);
                break;
                goto up;

            case 3:
                replace(arr);
                break;
                goto up;
            case 4:
                Delete(arr);
                break;
                goto up;
            case 5:

                cout << "Best of Luck! " << endl;
                break;
            }
        }
        else
            goto up;
        break;
    }
}