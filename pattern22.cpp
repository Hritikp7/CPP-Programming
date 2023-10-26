#include<iostream>
using namespace std;

int main(){
    int rows, i = 1;

    cout<<"enter the no. of rows";
    cin>>rows;

    int temp = rows;
    while(i<=rows){
        int a = 1;
        while(a <= temp){
            cout<<a;
            a++;
        }
        int j = rows - temp;
        while (j >= 1)
        {
            cout<<"*";
            j--;
        }
         int k = i-1;
        while(k>=1){
            cout<<"*";
            k--;
        }
        int m  = temp;
        while(m >=1){
            cout<<m;
            m--;
        }
        temp--;
        cout<<endl;
        i++;
    }
}