 #include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};
class complex
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData()
    {
        cout << a << endl;
    }
    // Individually declaring function as friends
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    // Declaring the entire calculator as friend
    friend class calculator;

};
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setData(1, 3);
    o2.setData(3, 5);
    calculator cal;
    int real_result = cal.sumRealComplex(o1, o2);
    cout << real_result << endl;
    int comp_result = cal.sumCompComplex(o1, o2);
    cout << comp_result << endl;
    return 0;
}
