#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n,int r){
    int nume = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return nume/denom;
}
int main(){
    int n,r,ans;
    cout<<"Enter the values for n and r"<<endl;
    cin>>n>>r;

    ans = nCr(n,r);

    cout<<"The nCr for given values is "<<ans<<endl;
}