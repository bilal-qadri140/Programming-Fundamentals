#include <iostream>
using namespace std;
struct Book
{
    int Id, pages;
    float price;
};
int main()
{
    Book b1, b2;
    cout << "Enter Book Id, pages and price: " << endl;
    cin >> b1.Id >> b1.pages >> b1.price;
    cout << "Enter Book Id, pages and price: " << endl;
    cin >> b2.Id >> b2.pages >> b2.price;

    if (b1.price > b2.price)
    {
        cout << "Book Id: " << b1.Id << endl;
        cout << "Book Pages: " << b1.pages << endl;
        cout << "Book Price: " << b1.price << endl;
    }
    else
    {
        cout << "Book Id: " << b2.Id << endl;
        cout << "Book Pages: " << b2.pages << endl;
        cout << "Book Price: " << b2.price << endl;
    }
}
