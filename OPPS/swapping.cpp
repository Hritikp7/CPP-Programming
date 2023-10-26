// #include<iostream>
// using namespace std;

// class swapping
// {
//     int a,b;
//     public:
//     void setData(int,int);
//     friend void swap_nos(swapping &);
//     void printData();
// };
// void swapping :: setData(int p,int q)
// {
//     a = p;
//     b = q;
// }
// void swapping :: printData()
// {
//     cout<<a<<" and "<<b<<endl;
// }
// void swap_nos(swapping &c){
//     int temp = c.a;
//     c.a = c.b;
//     c.b = temp;
//     // c.printData();
// }
// int main()
// {
//     swapping c1;
//     int a1 = 1,b1 =2;
//     c1.setData(a1,b1);
//     c1.printData();
//     swap_nos(c1);
//     c1.printData();

//     return 0;
// }
#include <iostream>
using namespace std;
class y;
class x
{
    int data1;

public:
    void setData(int);
    friend void swap_nos(x &, y &);
    void printData()
    {
        cout <<"The value of Data1 is: "<<data1<<endl;
    }
};
void x ::setData(int p)
{
    data1 = p;
}

class y
{
    int data2;

public:
    void setData(int);
    friend void swap_nos(x &, y &);
    void printData()
    {
        cout <<"The value of Data2 is: "<<data2<<endl;
    }
};
void y ::setData(int q)
{
    data2 = q;
}

    void swap_nos(x &b1,y &b2)
{
    int temp = b1.data1;
    b1.data1 = b2.data2;
    b2.data2 = temp;
    // c.printData();
}
int main()
{
    x c1;
    y c2;

    c1.setData(2);
    c2.setData(3);
    c1.printData();
    c2.printData();

    swap_nos(c1,c2);
    c1.printData();
    c2.printData();

   

    return 0;
}