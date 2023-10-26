#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Entere the number of rows ";
    cin>>rows;

    int i = 1;
    while (i<=rows)
    {
        int j = rows;
        while (j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    
    // int i = 1;
    // while (i<=rows)
    // {
    //     int j = 1;
    //     while (j<=rows)
    //     {
    //         cout<<rows - j + 1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
}

/*
321
321
321
*/