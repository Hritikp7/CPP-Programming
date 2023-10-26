// #include<iostream>
// using namespace std;

// int strLength(char arr[]){
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++ ){
//         count++;
//     }
//     return count;
// }
// void strReverse(char arr[],int size){
//     int start = 0;
//     int end = size - 1;

//     while(start < end){
//         swap(arr[start++],arr[end--]);
//     }
// }

// int palindrome(char name[],char temp[],int size){
//     for(int i = 0; name[i] != '\0'; i++){
//         if(name[i] != temp[i]){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     // char name[100] = "Hritik";
//     char name[100];

//     cout<<"Enter your name"<<endl;
//     cin>>name;
//     cout<<"Your name is "<<name<<endl;

//     char temp[100];

//     for(int i = 0 ; name[i] != '\0'; i++){
//         temp[i] = name[i];
//     }

    // int len = strLength(name);
    // cout<<len<<endl;

//     strReverse(temp,len);

//     if(palindrome(name,temp,len)){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not a palindrome";
//     }

// }

#include<iostream>
#include<string>

using namespace std;

bool validChar(char ch){
    if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')||(ch >= '0' && ch <= '9')){
        return 1;
    }
    else{
        return 0;
    }
}
char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

int palindrome(string arr){

    string temp;
    for(int i = 0; i<arr.size();i++){
    if(validChar(arr[i])){
        temp.push_back(arr[i]);
        } 
    }
    int start = 0;
    int end = temp.size() - 1;

    
    while(start < end){
        
        if(toLowerCase(temp[start++]) != toLowerCase(temp[end--])){
            return 0;
        }
    }
    return 1;
}

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    cout<<"The string is "<<str<<endl;

     if(palindrome(str)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}