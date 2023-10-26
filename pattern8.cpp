#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int count = 1;
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
1
23
456
*/