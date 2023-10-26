#include<iostream>
using namespace std;

int main(){
    int rows, count = 1;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        while (j<=rows)
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
123
456
789
*/