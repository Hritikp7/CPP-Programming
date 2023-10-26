#include <iostream>
using namespace std;

class base
{
    int data_1;

public:
    int data_2;
    void set_Data(int x, int y);
    int return_Data1();
    int return_Data2();
};
void base ::set_Data(int x, int y)
{
    data_1 = x;
    data_2 = y;
}
int base ::return_Data1()
{
    return data_1;
}

class derived : public base
{
    int data_3;

public:
    void set_Data3();
    void display_Data();
};
void derived ::set_Data3()
{
    data_3 = data_2 + return_Data1();
}
void derived ::display_Data()
{
    cout << "The value of data1 is: " << return_Data1() << endl;
    cout << "The value of data2 is: " << data_2 << endl;
    cout << "The value of data3 is: " << data_3 << endl;
}
int main()
{

    derived der;
    der.set_Data(10, 20);
    der.set_Data3();
    der.display_Data();
    return 0;
}