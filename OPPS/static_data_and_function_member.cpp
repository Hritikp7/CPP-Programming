#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;//default value 0

public:
    void setdata();
    void display();
    static void getcount();
};

void employee ::setdata()
{
    cout << "Enter the employee Id of the employee no " << count + 1 << endl;
    cin >> id;
    count++;
}
void employee ::display()
{
    cout << "The Employee ID of empolyee " << count <<" is " << id << endl;
}
void employee ::getcount()
{
    cout << "The value of count is " << count << endl;
}
int employee ::count;
int main()
{
    employee e1, e2, e3;
    e1.setdata();
    e1.display();
    employee :: getcount();

    e2.setdata();
    e2.display();
    employee :: getcount();

    e3.setdata();
    e3.display();
    employee :: getcount();
    return 0;
}
 