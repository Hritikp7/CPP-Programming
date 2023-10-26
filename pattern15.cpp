#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    char count = 'A';
    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

}   

/*
A
BC
DEF
*/