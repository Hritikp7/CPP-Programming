// // default constructor

// #include<iostream>
// using namespace std;

// class complex
// {
//     int a,b;
//     public:
//     complex(void); //default constructor
//     void printData();
// };
// complex :: complex(void)
// {
//     a = 1;
//     b = 2;
// }
//   void complex :: printData()
//     {
//         cout << a << " + " << b << "i" << endl;
//     }
// int main()
// {
//     complex c;
//     c.printData();
//     return 0;
// }

// Parametrized constructor

// *****     *******     *******     *******

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // parameterized constructor
    void printData();
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
void complex ::printData()
{
    cout << a << " + " << b << "i" << endl;
}
int main()
{
    complex c(4, 5); // Inmplicit call
    c.printData();
    complex a = complex(1, 3); // Explicit call
    a.printData();
    return 0;
}
