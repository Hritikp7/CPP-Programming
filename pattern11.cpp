#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    char ch = 'A';
    int i = 1;
    while (i<=rows)
    {
        int j = 1;
        while (j <= rows)
        {
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;   
        i++;
    }
    
}

/*
AAA
BBB
CCC
*/