#include<iostream>
using namespace std;

class base
{
    protected:
    int a;
    public:
    int b;
};
class derived : protected base
{
    public:
    void set_Data(int x)
    {
        a = x;
    }
    void display_Data()
    {
        cout<<a;
    }
};
int main()
{
    derived c;
    c.set_Data(2);
    c.display_Data();
    // c.a; //a' is protected within this context so we cannot access 'a' directly from outside
    return 0;
}