#include <iostream>
using namespace std;

// Base Class
class Employee
{
    float salary;

public:
    int id;
    Employee()
    {
    }
    Employee(int a)
    {
        id = a;
    }
    void displayData()
    {
        cout << id << endl;
    }
};
// Derived Class Syntax
//  class {{derived-class name}} : {{visibility-mode}} {{base class anme}}
// {

// }
/*
Creating a derived class from base class Employee
default visibility mode is private.
private visibility mode : public members of the base class become private members of
                          the derived class.
public visibility mode : public members of the base class become public members of
                          the derived class.
private members of the base class cannot be inherited.

*/
class programmer : Employee // default visibility mode private
{
public:
    programmer(int a)
    {
        id = a;
    }
    void displayData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee hritik(3);
    hritik.displayData();
    programmer hp(4);
    hp.displayData();
    // cout<<hp.id; // will give an error as public member(id) of base class employee is inherited as private member

    return 0;
}