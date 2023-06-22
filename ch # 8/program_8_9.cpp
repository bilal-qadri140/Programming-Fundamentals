#include <iostream>
using namespace std;

struct Book
{
    int id, page, price;
};
int main()
{  
    Book b[5];
    int i, m, max;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter Book ID: " << endl;
        cin >> b[i].id;
        cout << "Enter Book Pages: " << endl;
        cin >> b[i].page;
        cout << "Enter Book Price: " << endl;
        cin >> b[i].price;
    }
    max = b[0].price;
    for (i = 0; i < 5; i++)
    {
        if (b[i].price > max)
        {
            max = b[i].price;
            m = i;
        }
    }
    cout << "\n Most costly Book is: " << endl;
    cout << "\n Book ID is: " << b[m].id << endl;
    cout << "\n Book Pages is: " << b[m].page << endl;
    cout << "\n Book Price is: " << b[m].price << endl;
}
