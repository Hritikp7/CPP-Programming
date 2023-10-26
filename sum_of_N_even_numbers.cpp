// #include<iostream>
// using namespace std;

// int main(){
//     int num,sum = 0,i = 0;
//     cout<<"Enter the number"<<endl;
//     cin>>num;
//     while (i <= num)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }cout<<sum;
    
// }

#include<iostream>
using namespace std;

int main(){
    int num,sum = 0,i = 0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    while (i <= num)
    {
        sum = sum + i;
        i+=2;
    }cout<<sum;
    
}