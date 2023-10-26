#include<iostream>
using namespace std;

int main(){
    int n,i = 1,sum = 0;
    cout<<"Enter a value"<<endl;
    cin>>n;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<"The Sum of the First "<<n<<" natural numbers is "<<sum;
}