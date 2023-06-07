// Write a program that input five numbers from the user and store 
// them in an array. Then display all values using for loop.
// Muhammad Bilal Qadri..
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter an integer:\n ";
        cin>>arr[i];
    }
    cout<<"The values you enterd are: \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}