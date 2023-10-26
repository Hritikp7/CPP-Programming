#include<iostream>
using namespace std;

class num
{
    int a,b;
    public:
    num()
    {
        cout<<"hello Everyone"<<endl;
    }
    ~num()
    {
        cout<<"Bye"<<endl;
    }
};
int main()
{
    num a;
    {
        cout<<"destructor"<<endl;
        num b,c;
    }
    return 0;
}