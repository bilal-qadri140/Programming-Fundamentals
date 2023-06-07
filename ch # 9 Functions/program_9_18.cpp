#include <iostream>
using namespace std;
void show(int[]);
int main()
{
    int num[5], i;
    cout << "Enter five Integers: "<<endl;
    for (i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    show(num);
}
void show(int arr[])
{
    int j;
    cout << "The values in array: \n";
    for (j = 0; j < 5; j++)
    {
        cout << arr[j] << "\t";
    }
}