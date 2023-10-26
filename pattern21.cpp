#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;
    
    int i = 1;
    while (i<=rows)
    {
        int space = rows - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout<<j;
            j++;
        }
        int k = i-1;
        while(k>=1){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
    
}