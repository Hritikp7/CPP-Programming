#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        int a = 0,b = 1,fib = 1;
        while (j <= i)
        {
            cout<<fib;
            fib = a + b;
            a = b;
            b = fib;
            j++;
        }
        cout<<endl;
        i++;
    }
    

}   

/*

*/
