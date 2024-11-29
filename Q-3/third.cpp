#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout << "Enter Your string :";
    cin >> str;

    int strlen = str.length();

    

    string strrev;
    for(    int i =strlen-1;i>=0;i--){
        strrev = str;
    }

    cout << strrev;
}