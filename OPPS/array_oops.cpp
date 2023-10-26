#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter();
    void setPrice();
    void display();
};

void shop ::initCounter()
{
    counter = 0;
}

void shop ::setPrice()
{
    cout << "Enter the item ID of the item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the  price of the item " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price for the item id " << itemId[i] << "is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop a;
    a.initCounter();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.display();

    return 0;
}