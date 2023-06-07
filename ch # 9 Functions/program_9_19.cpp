#include <iostream>
using namespace std;
int even(int[]);
int main()
{
    int i, num[5], n;
    cout << "Enter five integers: "<<endl;
    for (i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    n = even(num);
    cout << "Total even Number are: " << n<<endl;
    cout << "Total odd Number are: " << 5-n;
}
int even(int arr[])
{
    int j, count = 0;
    for (j = 0; j < 5; j++)
    {
        if (arr[j] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}