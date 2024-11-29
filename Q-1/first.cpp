#include<iostream>

using namespace std;

int main(){

    char letter;

    cout << "Enter Your Letter :" ;
    cin >> letter;

    switch (letter)
    {
    case 'a':
        cout << "This is Vowel ";
        break;
    case 'e':
        cout << "This is Vowel ";
        break;
    case 'i':
        cout << "This is Vowel ";
        break;
    case 'o':
        cout << "This is Vowel ";
        break;
    case 'u':
        cout << "This is Vowel ";
        break;
    
    default:
        cout << "THe GIven Letter is Consonent";
        break;
    }
}