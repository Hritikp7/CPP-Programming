#include<iostream>
#include<string>
using namespace std;

    
void wordReverse(string s,int i,int start){
    int st = start;
    int end = i - 1;
    while(st < end){
        swap(s[st++],s[end--]);
    }
}
void strReverse(string s){
    int start = 0;
    for(int i = 0; i < s.length();i++){
        if(s.at(i) == ' '){
            wordReverse(s,i,start);
            start = i + 1;
        }
    }
}

int main(){
    string s;

    cout<<"Enter the string"<<endl;
    getline(cin,s);
    cout<<s<<endl;

    strReverse(s);
    cout<<s;

    

}