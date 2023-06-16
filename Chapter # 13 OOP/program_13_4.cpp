//13.4
#include <iostream>
using namespace std;
class Book
{
private:
    int BookId, pages;
    float price;

public:
    void get()
    {
        cout << "Enter Book Id: ";
        cin >> BookId;
        cout << "Enter Book Pages: ";
        cin >> pages;
        cout << "Enter Book Price: ";
        cin >> price;
    }
    void show()
    {
        cout << "Book Id is: " << BookId << endl;
        cout << "Book Pages is: " << pages << endl;
        cout << "Book Price is: " << price << endl;
    }
    void set(int id, int page, float prc)
    {
        BookId = id;
        pages = page;
        price = prc;
    }
    float get_price()
    {
        return price;
    }
};

int main()
{
    Book b1, b2;
    b1.get();
    b2.set(2, 320, 150.75);
    if (b1.get_price() > b2.get_price())

        b1.show();

    else
        b2.show();
}