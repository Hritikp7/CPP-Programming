// #include<iostream>
// using namespace std;

// int main(){
//     int num,i = 2,flag = 0;
//     cout<<"Enter the value: ";
//     cin>>num;
//     while(i < num){
//         if(num % i == 0){
//             flag = 1;
//             break;
//         }
//         i++;
//     }
//     if (flag == 1)
//     {
//         cout<<"Not a Prime number."<<endl;
//     }
//     else{
//         cout<<"A Prime number."<<endl;
//     }
    
// }
#include<iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
};
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }
}