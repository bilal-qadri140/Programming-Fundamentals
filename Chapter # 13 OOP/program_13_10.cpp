//13.10
#include <iostream>
#include <string.h>
using namespace std;
class TV
{
private:
    char BrandName[30], Model[20];
    float RetailPrice;

public:
    TV(char brand[], char mod[], float price);
    void change(char brand[], char mod[], float price);
    void Display();
};
TV::TV(char brand[], char mod[], float price)
{
    strcpy(BrandName, brand);
    strcpy(Model, mod);
    RetailPrice = price;
}
void TV::change(char brand[], char mod[], float price)
{
    strcpy(BrandName, brand);
    strcpy(Model, mod);
    RetailPrice = price;
}
void TV ::Display()
{
    cout << "Brand Name: " << BrandName << endl;
    cout << "Model Name: " << Model << endl;
    cout << "Price: " << RetailPrice << endl;
}

int main()
{
    TV tv("SONY", "HDTV", 2500);
    cout << "Values is: " << endl;

    tv.Display();
    cout << "After Changing: " << endl;

    tv.change("Toshiba", "SDTV", 2200);
    tv.Display();
}