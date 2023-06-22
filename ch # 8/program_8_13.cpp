#include <iostream>
using namespace std;

union shirt
{
    char size;
    int chest, height;
};
int main()
{
    shirt mine;
    cout << "Size of union: " << sizeof(mine);
    cout << "\nEnter Size: (s/m/l)";
    cin >> mine.size;
    cout << "\nThe size is: " << mine.size;
    cout << "\nThe chest is: " << mine.chest;
    cout << "\nThe height is: " << mine.height;
    cout << "\nwhat is chest:? ";
    cin >> mine.chest;
    cout << "\nThe size is: " << mine.size;
    cout << "\nThe chest is: " << mine.chest;
    cout << "\nThe height is: " << mine.height;
    cout << "\nwhat is height:? ";
    cin >> mine.height;
    cout << "\nThe size is: " << mine.size;
    cout << "\nThe chest is: " << mine.chest;
    cout << "\nThe height is: " << mine.height;
}
