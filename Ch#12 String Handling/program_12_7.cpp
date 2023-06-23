#include<iostream>
using namespace std;
int main()
{
    char a[50];
    cout<<"Enter a string: ";
    cin.getline(a,50);
    int count=0, i=0;
    while (a[i]!='\0')
    {
        switch (a[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        count++;
        }
        i++;
    }
    cout<<"T otal no of Vovels is: "<<count;
    
}