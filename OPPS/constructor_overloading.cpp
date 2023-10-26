#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);
    complex(int, int);
    complex(int);

    void printData();
};

complex ::complex()
{
    a = 1;
    b = 2;
}

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
//************Default argument ************
// complex ::complex(int x, int y = 5)
// {
//     a = x;
//     b = y;
// }
complex ::complex(int x)
{
    a = x;
    b = 5;
}
void complex ::printData()
{
    cout << a << " + " << b << "i" << endl;
}
int main()
{
    complex c1, c2, c3;
    c1.printData();
    // c2 = complex(4);   // Default argument
    // c2.printData();
    c2 = complex(3, 3);
    c2.printData();
    c3 = complex(5);
    c3.printData();
    return 0;
}