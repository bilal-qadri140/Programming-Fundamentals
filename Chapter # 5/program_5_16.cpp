#include <iostream>
//#include <windows.h>

using namespace std;
int main()
{
    system("cls");
    int a, b, c;
    system("color 70");
    cout << "Enter three numbers:\n";
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
        	
            cout << a << " is smallest number!";
        }
        else{
		
        
            cout << c << " is smallest number!";}
    }
    else if (b < c)
    {
        cout << b << " is smallest number!";
    }
    else
        cout << c << " is smallest number!";
}
