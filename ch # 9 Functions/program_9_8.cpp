#include <iostream>
using namespace std;
void shape(int, char);

int main()
{
    int num;
    char ch;
    cout << "Enter no. of Rows: ";
    cin >> num;
    cout << "Enter character: ";
    cin >> ch;
    shape(num, ch);
}
void shape(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << c;
        }
        cout << endl;
    }
}