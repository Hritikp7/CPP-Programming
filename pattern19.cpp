// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     cout<<"Enter the number of rows ";
//     cin>>rows;
    
    
//     int i = 1;
//     while (i<=rows)
//     {
//         int space = i-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j = rows;
//         while (j >= i)
//         {
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

// /*
// ****
//  ***
//   **
//    *
// */

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;
    
    
    int i = 1;
    while (i<=rows)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = rows;
        while (j >= i)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    
}

/*
4321
 432
  43
   4
*/