#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;
    public:
    int d;
    void setData(int,int,int);
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
    }
};

void Employee :: setData(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee hritik;
    // hritik.a // will give an error as the variable a is private, cannot set private variable directly
    hritik.d = 4;
    hritik.setData(1,2,3);
    hritik.getData();
    return 0;
}