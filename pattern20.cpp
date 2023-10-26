#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;
    
    
    int i = 1;
    while (i<=rows)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = rows;
        while (j >= i)
        {
            cout<<rows - j + 1;
            j--;
        }
        cout<<endl;
        i++;
    }
    
}

/*
1234
 123
  12
   1
*/