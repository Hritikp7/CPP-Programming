#include<iostream>
using namespace std;

int isEven(int n){
    if (n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if (isEven(num) == 1)
    {
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    
}