// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     cout<<"Enter the number of rows ";
//     cin>>rows;
    
    
//     int i = 1;
//     while (i<=rows)
//     {
//         int space = rows - i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

// /*
//   *
//  **
// ***
// */

// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     cout<<"Enter the number of rows ";
//     cin>>rows;
    
    
//     int i = 1;
//     while (i<=rows)
//     {
//         int space = rows - i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

/*
   1
  22
 333
4444
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;
    
    int count = 1;
    int i = 1;
    while (i<=rows)
    {
        int space = rows - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}

//    1
//   23
//  456
// 78910