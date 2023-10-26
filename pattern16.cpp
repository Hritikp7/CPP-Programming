#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int i = 1;
    while (i<=rows)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + i + j - 2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

}

/*
A
BC
CDE
*/