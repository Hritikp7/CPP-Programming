// #include<iostream>
// using namespace std;

// class complex
// {
//     int a, b;
//     public:
//     void setData(int n1,int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printData()
//     {
//         cout<<a<<" + "<<b<<"i"<<endl;
//     }
//     friend complex sumcomplex(complex o1,complex o2);

// };
// complex sumcomplex(complex o1,complex o2)
// {
//     complex o3;
//     o3.setData((o1.a + o2.a),(o1.b + o2.b));
//     // o3.printData();
//     return o3;
// }
// int main()
// {
//     complex c1,c2,sum;
//     c1.setData(1,2);
//     c1.printData();
//     c2.setData(4,5);
//     c2.printData();
    
//     sum = sumcomplex(c1,c2);
//     sum.printData();
//     return 0;
// }
#include<iostream>
using namespace std;
class y;

class x
{
    int data;
    public:
    void setdata(int n1)
    {
        data = n1;
    }
    friend void add(x,y);
};
class y
{
    int data;
    public:
    void setdata(int n1)
    {
        data = n1;
    }
    friend void add(x,y);

};
void add(x o1,y o2)
{
    cout<<o1.data + o2.data;
}
int main()
{
    x a;
    a.setdata(3);
    y b;
    b.setdata(5);

    add(a,b);
    return 0;
}