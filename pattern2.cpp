#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows";
    cin>>rows;

    int i = 1;
    while (i<=rows)
    {
        int j = 1;
        while (j<=rows)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}

/*
111
222
333
*/