#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    int hundred, fifty, twenty, one,r;
    switch(1)
    {
    case 1:
        hundred = num / 100;
        cout << "The number of hundred's is " << hundred << endl;
        r = num % 100;

    case 2:
        fifty = r / 50;
        cout << "The number of fifty's is " << fifty << endl;
        r = r % 50;

    case 3:
        twenty = r / 20;
        cout << "The number of twenty's is " << twenty << endl;
        r = r % 20;

    case 4:
        one = r / 1;
        cout << "The number of one's is " << one << endl;
    }
}