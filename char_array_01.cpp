#include<iostream>
#include<string>
using namespace std;

int strLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++ ){
        count++;
    }
    return count;
}
void strReverse(char arr[],int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start++],arr[end--]);
    }
}

int main(){
    // char name[100] = "Hritik";
    char name[100];
    string s = "Hri\0ik";

    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<s;
    // gets(name);

    cout<<"Your name is "<<name<<endl;

    int len = strLength(name);
    cout<<len<<endl;

    strReverse(name,len);
    cout<<"The reverse of your name is "<<name<<endl;

}