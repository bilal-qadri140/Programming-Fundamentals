#include <iostream>
using namespace std;
void Decimal_to_Binary(); 
void Decimal_to_Binary()
{
    int decimal, binary[10], i;
    cout << "Enter a Decimal Number: ";
    cin >> decimal;

    for (i = 0; decimal > 0; i++)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }
    cout << "Binary is  " << endl;
    for (i = i - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
}
int main()
{
    Decimal_to_Binary();
}