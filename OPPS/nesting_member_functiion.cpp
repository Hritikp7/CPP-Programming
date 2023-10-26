#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void check_binary();
    void ones_complement();
    void display1();
    // void twos_compliment();
    // void display2();
    
};

void binary ::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement()
{
    check_binary(); // nested fuction inside one's complement function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display1()
{
    cout << "The ones compliment of the binary number is: "<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
// void binary ::twos_compliment()
// {
//     int carry = 1;
//     int i;
//     for (i = s.length()-1; i >= 0;i--)
//     {
//         if (s.at(i) == '1' && carry == '1')
//         {
//             s.at(i) = '0';
//         }
//         else if (s.at(i) == '0' && carry == '1')
//         {
//             s.at(i) = '1';
//             carry = 0;
//         }
//     }
     
// }
// void binary :: display2()
// {
//     cout << "The two compliment of the binary number is:"<<endl;

//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
// }

int main()
{
    binary b;
    b.read();
    // b.chech_binary();
    b.ones_complement();
    b.display1();
    // b.twos_compliment();
    // b.display2();
    return 0;
}