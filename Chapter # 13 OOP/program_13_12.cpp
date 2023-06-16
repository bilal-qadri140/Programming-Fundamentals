// 13.12
#include <iostream>
#include <string.h>
using namespace std;

class Book
{
private:
    int pages, price;
    char title[30];

public:
    void get()
    {
        cout << "Enter Book Title " << endl;
        cin.getline(title,30);
        cout << "Enter Book Pages " << endl;
        cin >> pages;
        cout << "Enter Book Price " << endl;
        cin >> price;
    }
    void show()
    {
        cout << "Title is: " << title << endl;
        cout << "Pages is " << pages << endl;
        cout << "Price is " << price << endl;
    }
};

int main()
{
    Book b1;
    b1.get();
    Book b2 = b1;
    Book b3 = b1;
    cout << "Value of b1 = ";
    b1.show();
    cout << "Value of b2 = ";
    b2.show();
    cout << "Value of b3 = ";
    b3.show();
}