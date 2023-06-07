#include <iostream>
using namespace std;
void shap();
void shap()
{
    int n;
    cout << "Enter the hight of triangle: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    shap();
}