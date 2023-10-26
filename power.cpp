#include<iostream>
using namespace std;

int power(){
    int a,b;
    cout<<"Enter the value for which the power is to be calculated"<<endl;
    cin>>a;
    cout<<"Enter the value of power"<<endl;
    cin>>b;
    int pow = 1;
    for (int i = 0; i < b; i++)
    {
        pow = pow * a;
    }
    return pow;
}
int main(){
    int ans = power();
    cout<<"Answer is "<<ans<<endl;
}