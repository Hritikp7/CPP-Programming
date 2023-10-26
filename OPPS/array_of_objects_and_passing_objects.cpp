//
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printData()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex com[2], sum;
    int num1, num2;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Two numbers" << endl;
        cin >> num1 >> num2;
        com[i].setdata(num1, num2);
        com[i].printData();
    }
    sum.setDataBySum(com[0], com[1]);
    sum.printData();

    return 0;
}