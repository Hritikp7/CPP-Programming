#include<iostream>
using namespace std;

int main(){
    int num,i=0;
    cout<<"How many even numbers do you want to print:"<<endl;
    cin>>num;

    while (i<=num){
        if (i % 2 == 0)
        {
            cout<<i;
        }
        i++;
    }

}