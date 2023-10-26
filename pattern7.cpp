// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     cout<<"Enter the number of rows ";
//     cin>>rows;

//     int i = 1;
//     while (i<=rows)
//     {
//         int j = i;
//         while(j<=rows){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

/*
***
**
*
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;

    int i = 1;
    while (i<=rows)
    {
        int j = rows;
        while(j>=i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    
}

/*
***
**
*
*/