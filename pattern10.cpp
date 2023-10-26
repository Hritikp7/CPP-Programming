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
            cout<<i-j+1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

}

/*
1
21
321
*/