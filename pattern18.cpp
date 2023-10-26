#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int i = 1;
    while (i<=rows)
    {
        int j = rows - i + 1;
        while (j>=1)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    
}

// ****
// ***
// **
// *