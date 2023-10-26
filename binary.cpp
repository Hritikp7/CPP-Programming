#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 6;
    int ans = 0;
    int i = 0;
    // while(n!=0){
    //     int r = n % 10;
    //     ans = ans * 10 + r;
    // n = n/10;
    // }

    while(n!=0){
        int bit = n & 1;
        if(bit){
        ans = bit * pow(10,i) + ans;
    }
        n = n>>1; 
        i++;
    }
    cout<<ans;
}