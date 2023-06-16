#include <iostream>
using namespace std;
class Book
{
    int bookId, pages, price;

public:
    void get();
    void show();
    void set(int id, int pg, int prc);
    int get_price();
};
void Book ::get()
{
    cout << "Enter book id: " << endl;
    cin >> bookId;
    cout << "Enter book pages: " << endl;
    cin >> pages;
    cout << "Enter book price: " << endl;
    cin >> price;
}
void Book ::show()
{
    cout << "BookId is: " << bookId << endl;
    cout << "Book Pages is: " << pages << endl;
    cout << "Book Price is: " << price << endl;
}
void Book ::set(int id, int pg, int prc)
{
    bookId = id;
    pages = pg;
    price = prc;
}
int Book ::get_price()
{
    return price;
}
int main()
{
    Book a, b;
    a.get();
    b.set(2, 200, 100);
    cout << "Most costly Book is: " << endl;
    if (a.get_price() > b.get_price())
    {
        a.show();
    }
    else
        b.show();
    system("pause");
}