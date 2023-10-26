#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int i = 1;
    while (i<=rows)
    {
        char ch = 'A';
        int j = 1;
        while (j <= rows)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}

/*
ABC
ABC
ABC
*/