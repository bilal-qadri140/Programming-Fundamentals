// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {12, 32, 33, 51, 20};
//     // int *ptr = &a[0];
//     // cout << "Address of a = " << ptr << endl;
//     // cout << "Address of a = " << &a << endl;
//     // cout << "Value at a[0] = " << *a << endl;
//     // cout << "Value at ptr = " << *ptr << endl; // Value of a[0]
//     // ptr = ptr + 1;
//     // cout << "Value at ptr = " << *ptr << endl; // Value of a[1]
//     // ptr = ptr + 2;
//     // cout << "Value at ptr = " << *ptr << endl; // Value of a[3]
//     // ptr--;
//     // cout << "Value at ptr = " << *ptr << endl; // Value of a[2]

//     int *ptr = &a[0];
//     cout << ptr << endl; // Address of a[0].....
//     ptr++;
//     cout << ptr << endl; // Address of a[1]
//     ptr = ptr + 3;
//     cout << ptr << endl; // Address of a[4]

//     ptr = ptr - 2;
//     cout << ptr << endl; // Address of a[2]
//     ptr++;
//     cout << ptr << endl; // Address of a[3]
// }
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {60, 32, 65, 26, 20}, i;
    int *ptr[5];
    for (i = 0; i < 5; i++)
    {
        ptr[i] = &a[i]; // store address in pointer..
    }
    int max = *ptr[0];
    for (i = 0; i < 5; i++)
    {
        if (*ptr[i] > *ptr[0])
        {
            max = *ptr[i];
        }
    }

    cout << "Maximum value is: " << max;
}



// cout << "Values are: " << endl;
// for (i = 0; i < 5; i++)
// {
//     cout << *ptr[i] << endl;
// }
// cout<<"Address of values: "<<endl;
// for ( i = 0; i < 5; i++)
// {
//     cout<<ptr[i]<<endl;
// }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[] = {23, 42, 55, 65, 44, 65}, i;
//     int max = a[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] > max)
//         max = a[i];
//     }

//     cout << "max is " << max;
// }